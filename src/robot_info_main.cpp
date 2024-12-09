#include "robot_info/robot_info_class.h"
#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/ros.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info_node");
  ros::NodeHandle nh;

  RobotInfo rb(nh);

  ros::Rate loop_rate(10);

  while (ros::ok()) {
    rb.publish_data();
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}