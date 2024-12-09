#pragma once
#include "robot_info/hydraulic_system_monitor.h"
#include "robot_info/robot_info_class.h"

class AGVRobotInfo : public RobotInfo {
private:
  std::string maximum_payload;
  HydraulicSystemMonitor hsm;

public:
  AGVRobotInfo(ros::NodeHandle nh);
  void publish_data() override;
};