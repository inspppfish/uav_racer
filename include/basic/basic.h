//
// Created by airvoltex on 22-8-16.
//

#ifndef MYUAV_BASIC_H
#define MYUAV_BASIC_H

#define TIME_RECORD_IMAGE_PROCESS

#include <cstdio>
#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv4/opencv2/highgui/highgui.hpp>
#include <opencv4/opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

void front_view_cb(const sensor_msgs::ImageConstPtr& msg);
void front_depth_cb(const sensor_msgs::ImageConstPtr& msg);

extern double proc_time; //ms
extern cv::Mat front_bgr_frame; //front_sense

typedef enum {
    red,
    orange,
} RingColor;


#endif //MYUAV_BASIC_H
