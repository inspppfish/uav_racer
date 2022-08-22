//
// Created by airvoltex on 22-8-16.
//

#ifndef MYUAV_BASIC_H
#define MYUAV_BASIC_H

//#define TIME_RECORD_IMAGE_PROCESS
//#define SHOW_MASK_IMAGE
//#define SHOW_DEPTH_IMAGE

#include <cstdio>
#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv4/opencv2/highgui/highgui.hpp>
#include <opencv4/opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <Eigen/Eigen>

typedef enum {
    red,
    orange,
} RingColor;

typedef volatile struct {
    float x;
    float y;
    float z;
} Point;


void front_view_cb(const sensor_msgs::ImageConstPtr& msg);
void front_depth_cb(const sensor_msgs::ImageConstPtr& msg);
void front_view_mask (const cv::Mat& frame, RingColor color);
void cam_info_cb(const sensor_msgs::CameraInfo& msg);
void pix_point2cam3d(const cv::Mat& depthImage, const sensor_msgs::CameraInfo& msg, int x, int y, Point& result);

extern double proc_time; //ms
extern cv::Mat front_bgr_frame; //front_sense
extern cv::Mat front_depth_frame; //front depth
extern sensor_msgs::CameraInfo caminfo; //caminfo


#endif //MYUAV_BASIC_H
