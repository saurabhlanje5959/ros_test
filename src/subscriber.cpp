#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>


void Callback(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("Number received: [%d]", msg->data);
}

int main(int argc, char **argv)
{
ros::init(argc,argv,"receiver");
ros::NodeHandle nh;
ros::Subscriber receiver_ = nh.subscribe("numbers", 1000, Callback);


  ros::spin();

  return 0;
}
