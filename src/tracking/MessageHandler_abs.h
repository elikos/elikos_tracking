#ifndef MESSAGE_HANDLER_ABS
#define MESSAGE_HANDLER_ABS

#include <ros/ros.h>
#include <elikos_ros/RobotRaw.h>
#include <elikos_ros/RobotRawArray.h>
#include <geometry_msgs/PoseStamped.h>
#include <cv_bridge/cv_bridge.h>

#include "TransformationUnit.h"

class MessageHandler_abs
{
public:
    MessageHandler_abs();
    ~MessageHandler_abs();
    void dispatchMessageRobotRaw(const elikos_ros::RobotRawArray::ConstPtr &input);

private:
    ros::NodeHandle nh_;
    ros::Subscriber sub_;
    ros::Publisher pubTest_;
    elikos_ros::RobotRawArray newArray_;
	  TransformationUnit transformationUnit_;
};

#endif /// MESSAGE_HANDLER_TTF
