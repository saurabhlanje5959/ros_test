#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>

int main(int argc,char **argv)
{
ros::init(argc,argv,"cpp_publisher");
ros::NodeHandle nh;
ros::Publisher publisher = nh.advertise<std_msgs::Int32>("/numbers",10);
ros::Rate loop_rate(10);

int number_count = 0;
while(ros::ok())
{
std_msgs::Int32 msg;
msg.data=number_count;

publisher.publish(msg);
number_count++;
loop_rate.sleep();

}
return 0;
}
