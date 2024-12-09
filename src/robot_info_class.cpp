#include "robot_info/robot_info_class.h"
#include "robotinfo_msgs/RobotInfo10Fields.h"
#include "ros/node_handle.h"

RobotInfo::RobotInfo(ros::NodeHandle nh) {
  pub = nh.advertise<robotinfo_msgs::RobotInfo10Fields>("robot_info", 1000);
  robot_description = "Mir100";
  serial_number = "567A359";
  ip_address = "169.254.5.180";
  firmware_version = "3.5.8";
}

void RobotInfo::publish_data() {

  robotinfo_msgs::RobotInfo10Fields msg;

  msg.data_field_01 = "robot_description: " + robot_description;
  msg.data_field_02 = "serial_number: " + serial_number;
  msg.data_field_03 = "ip_address: " + ip_address;
  msg.data_field_04 = "firmware_version: " + firmware_version;

  pub.publish(msg);
}