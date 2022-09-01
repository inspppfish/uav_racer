//
// Created by airvoltex on 22-8-29.
//


#include "planner/planner.h"
#include "math.h"

#define WAY_POINT_COUNT 8
#define Kp 0.5
#define MAX_SPEED 10.0*Kp
#define YAW_TRACK

geometry_msgs::PointStamped detected_point;

float WayPoint::get_distance_square(geometry_msgs::PointStamped p) {

    return pow(this->point.point.x - p.point.x, 2) +
            pow(this->point.point.y - p.point.y, 2) +
            pow(this->point.point.z - p.point.z, 2);
}

void init_reference_waypoint (WayPoint* way_point_set) {
    ROS_INFO("Initialize reference point");
    float goalpath[WAY_POINT_COUNT][3] = {{14.8715, -0.7906, -2.6},
                                          {37.0, -12, -0.5},
                                          {68, -13, 0},
                                          {95, -8, 0.5},
                                          {110, -15, 0},
                                       {114.5, -36, 0},
                                       {121.5, -67.7, -3.5},
                                       {121.5, -96, -7}};
    for (int i =0; i<WAY_POINT_COUNT; i++) {
        way_point_set[i].point.header.frame_id = "gnd3d";
        way_point_set[i].point.point.x = goalpath[i][0];
        way_point_set[i].point.point.y = goalpath[i][1];
        way_point_set[i].point.point.z = goalpath[i][2];
        way_point_set[i].source = WayPoint::fixed;
        way_point_set[i].is_reliable = WayPoint::not_reliable;
        way_point_set[i].is_ring_center = WayPoint::ring_center;
        way_point_set[i].status = WayPoint::no_reaching;
    }
}



void process_detected_point(WayPoint* reference_point, geometry_msgs::PointStamped p, tf2_ros::Buffer& buffer) {

    if (p.point.x < 1) {
        // trait as not detected
        return;
    }

    // get closed point
    // first for index & second for distance(distance square in processing)
    std::pair<int, float> closest_point(0, 99999999999);
    try {
        p.header.stamp = ros::Time::now() - ros::Duration(0.1);
        p = buffer.transform(p, "gnd3d");
    }
    catch (std::exception &e) {
        ROS_WARN("%s", e.what());
        return;
    }
    for (int i = 0;i<WAY_POINT_COUNT; i++) {
        float distance_square = reference_point[i].get_distance_square(p);
        ROS_INFO("index: %d; distance: %.2lf", i, sqrt(distance_square));
        if (distance_square < closest_point.second) {
            closest_point.second = distance_square;
            closest_point.first = i;
        }
    }

    if (closest_point.second > 10000) {
        return;
    }

    // update reference point
    int update_index = closest_point.first;
    ROS_INFO("updated %d waypoint", update_index);
    reference_point[update_index].point = p;
    reference_point[update_index].is_reliable = WayPoint::reliable;
    reference_point[update_index].is_ring_center = WayPoint::ring_center;
    reference_point[update_index].source = WayPoint::vision;
}

void detected_point_cb(geometry_msgs::PointStamped msg) {
    detected_point = msg;
    detected_point.header.frame_id = "cam3d";
}

void real_pose_cb (nav_msgs::Odometry odem) {
    tf2_ros::TransformBroadcaster pub;
    geometry_msgs::TransformStamped data;
    data.header.frame_id = "gnd3d";
    data.child_frame_id = "cam3d";
    data.header.stamp = ros::Time::now();

    //set translation
    data.transform.translation.x = odem.pose.pose.position.x;
    data.transform.translation.y = odem.pose.pose.position.y;
    data.transform.translation.z = odem.pose.pose.position.z;

    data.transform.rotation.w = odem.pose.pose.orientation.w;
    data.transform.rotation.x = odem.pose.pose.orientation.x;
    data.transform.rotation.y = odem.pose.pose.orientation.y;
    data.transform.rotation.z = odem.pose.pose.orientation.z;

    ROS_INFO("updated real_pose");
    pub.sendTransform(data);
}

airsim_ros_pkgs::VelCmd control_pid(float x, float y, float z) {
    airsim_ros_pkgs::VelCmd vel_cmd;

    float vx = Kp * x;
    float vy = Kp * y;
    float vz = Kp * z;

    auto v = (float)sqrt(pow(vx, 2) + pow(vy, 2) + pow(vz, 2));

    if(v > MAX_SPEED) {
        vx = vx/v *MAX_SPEED;
        vy = vy/v *MAX_SPEED;
        vz = vz/v *MAX_SPEED;
    }
    vel_cmd.twist.linear.x = vx;
    vel_cmd.twist.linear.y = vy;
    vel_cmd.twist.linear.z = vz;

#ifdef YAW_TRACK
    vel_cmd.twist.angular.z = Kp * atan(vy/vx);
#endif

    return vel_cmd;
}

airsim_ros_pkgs::VelCmd update_vel(WayPoint* reference_point, tf2_ros::Buffer& buffer, airsim_ros_pkgs::VelCmd vel_last) {
    for (int i =0; i<WAY_POINT_COUNT; i++) {
        if (reference_point[i].status == WayPoint::passed) {
            continue;
        }
        geometry_msgs::PointStamped cam_point;
        try{
            reference_point[i].point.header.stamp = ros::Time::now() - ros::Duration(0.1);
            cam_point = buffer.transform(reference_point[i].point, "cam3d");
//            ROS_INFO("frame id: %s", reference_point[i].point.header.frame_id.c_str());
        }
        catch (std::exception &e) {
            ROS_WARN("%s", e.what());
            return vel_last;
        }

        float distance_square = pow(cam_point.point.x, 2) +
                pow(cam_point.point.y, 2) +
                pow(cam_point.point.z, 2);
        if (reference_point[i].status == WayPoint::approaching || reference_point[i].status == WayPoint::no_reaching) {
            ROS_INFO("Approaching point distance %.2lf", sqrt(distance_square));
            if (cam_point.point.x < 0) {
                reference_point[i].status = WayPoint::passed;
            }
            else{
                reference_point[i].status = WayPoint::approaching;
            }
            if (distance_square < 4) {
                return vel_last;
            }
            return control_pid(cam_point.point.x,
                               cam_point.point.y,
                               cam_point.point.z);
        }
    }
}

int main (int argc, char** argv) {
    ROS_INFO("Planner start!");
    ros::init(argc, argv, "planner");
    ros::NodeHandle n;
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener listener(buffer);
    ros::Subscriber detected_point_suber = n.subscribe<geometry_msgs::PointStamped>("detected_point", 1, detected_point_cb);
    ros::Subscriber real_pose_suber = n.subscribe("airsim_node/drone_1/odom_local_ned", 1, real_pose_cb);
    ros::Publisher vel_publisher = n.advertise<airsim_ros_pkgs::VelCmd>("airsim_node/drone_1/vel_cmd_body_frame", 1);

    auto reference_point = new WayPoint[WAY_POINT_COUNT];
    init_reference_waypoint(reference_point);

    ros::Rate loop_rate(30);
    while (ros::ok()) {

        process_detected_point(reference_point, detected_point, buffer);
        static airsim_ros_pkgs::VelCmd vel_cmd;
        vel_cmd = update_vel(reference_point, buffer, vel_cmd);
        ROS_INFO("vel: x:%.2lf y:%.2lf z:%.2lf", vel_cmd.twist.linear.x, vel_cmd.twist.linear.y, vel_cmd.twist.linear.z);
        vel_publisher.publish(vel_cmd);
        ros::spinOnce();
        loop_rate.sleep();
    }
}