//
// Created by airvoltex on 22-8-21.
//
#include "basic/basic.h"

sensor_msgs::CameraInfo caminfo;

void cam_info_cb(const sensor_msgs::CameraInfo& msg) {
    caminfo = msg;
    Point p;
    //todo:optimise this
    if(front_depth_frame.cols < 1) return;
    pix_point2cam3d(front_depth_frame, caminfo, 100, 200, p);
}

void pix_point2cam3d(const cv::Mat& depthImage, const sensor_msgs::CameraInfo& msg, int x, int y, Point& result) {
    // tested by painaogua
    result.z = depthImage.at<float>( y, x );
    result.x = (x - caminfo.K.at( 2 ) ) / caminfo.K.at( 0 ) * result.z;
    result.y = (y - caminfo.K.at( 5 ) ) / caminfo.K.at( 4 ) * result.z;
    ROS_INFO("x:%.3f y:%.3f z:%.3f", result.x, result.y, result.z);
}