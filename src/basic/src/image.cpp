//
// Created by airvoltex on 22-8-17.
//

#include "basic/basic.h"

double proc_time;
cv::Mat front_bgr_frame; //front_sense
cv::Mat front_depth_frame; //front_depth

void front_view_cb(const sensor_msgs::ImageConstPtr& msg)
{
    try {
        //time record
        ros::Time time_begin = ros::Time::now();

        front_bgr_frame = cv_bridge::toCvCopy(msg, "bgr8")->image;
        front_view_mask(front_bgr_frame, RingColor::orange);
    }
    catch (cv_bridge::Exception& e) {
        ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
    }
}

void front_view_mask (const cv::Mat& frame, RingColor color) {
#ifdef TIME_RECORD_IMAGE_PROCESS
    auto time_begin = ros::Time::now();
#endif

    // process in hsv color space
    cv::Mat hsv_frame;
    cv::cvtColor(frame, hsv_frame, cv::COLOR_BGR2HSV);
    static cv::Mat element = getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));

    if (color == RingColor::orange) {
        cv::Mat orange_mask;

        // todo:调整参数
        cv::inRange(hsv_frame,  cv::Scalar(5, 200 ,150), cv::Scalar(25, 255, 255), orange_mask);
        cv::morphologyEx(orange_mask, orange_mask, cv::MORPH_OPEN, element);
#ifdef SHOW_MASK_IMAGE
        cv::imshow("front_view_orange_mask", orange_mask);
        cv::waitKey(10);
#endif
    }
    else if(color == RingColor::red){
        cv::Mat red_mask1, red_mask2, red_mask;

        //todo:调整参数
        cv::inRange(hsv_frame, cv::Scalar(0, 150, 30), cv::Scalar(5, 255, 255), red_mask1);
        cv::inRange(hsv_frame, cv::Scalar(170, 150, 30), cv::Scalar(180, 255, 255), red_mask2);
        cv::bitwise_or(red_mask1, red_mask2, red_mask);
        cv::morphologyEx(red_mask, red_mask, cv::MORPH_OPEN, element);
#ifdef SHOW_MASK_IMAGE
        cv::imshow("front_view_red_mask", red_mask);
        cv::waitKey(10);
#endif
    }

#ifdef TIME_RECORD_IMAGE_PROCESS
    auto time_spent = ros::Time::now() - time_begin;
    proc_time = time_spent.toSec()*1000;
#endif
}

void front_depth_cb(const sensor_msgs::ImageConstPtr& msg) {
    try {
        front_depth_frame = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::TYPE_32FC1)->image;
#ifdef SHOW_DEPTH_IMAGE
        cv::imshow("depth_view", front_depth_frame);
        cv::waitKey(10);
#endif
    }
    catch (cv_bridge::Exception& e) {
        ROS_ERROR("Could not convert from '%s' to '32FC1'.", msg->encoding.c_str());
    }
}