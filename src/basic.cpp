//
// Created by airvoltex on 22-8-16.
//
#include "basic/basic.h"



int main (int argc, char** argv) {
    ROS_INFO("start!\n");


    ros::init(argc, argv, "basic"); // 初始化ros 节点，命名为 basic
    ros::NodeHandle n; // 创建node控制句柄
    image_transport::ImageTransport it(n); //创建图像传输控制句柄

    image_transport::Subscriber front_View_suber = it.subscribe("airsim_node/drone_1/front_center/Scene", 1, front_view_cb);
    image_transport::Subscriber front_depth_suber = it.subscribe("airsim_node/drone_1/front_center/depth_perspective", 1, front_depth_cb);


    ros::Rate loop_rate(50);
    while (ros::ok()) {

#ifdef TIME_RECORD_IMAGE_PROCESS
        ROS_INFO("process the image for %.2lf ms", proc_time);
#endif
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}

