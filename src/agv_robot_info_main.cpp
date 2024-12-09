#include "robot_info/agv_robot_info_class.h"
#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/ros.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "agv_robot_info_node");
  ros::NodeHandle nh;

  AGVRobotInfo agvrb(nh);

  ros::Rate loop_rate(10);

  while (ros::ok()) {
    agvrb.publish_data();
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}