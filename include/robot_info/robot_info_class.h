#pragma once
#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <ros/ros.h>

class RobotInfo {
protected:
  std::string robot_description;
  std::string serial_number;
  std::string ip_address;
  std::string firmware_version;
  ros::Publisher pub;

public:
  RobotInfo(ros::NodeHandle nh);
  virtual void publish_data();
};