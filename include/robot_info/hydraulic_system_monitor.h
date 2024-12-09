#pragma once
#include <string>

class HydraulicSystemMonitor {
private:
  std::string hydraulic_oil_temperature;
  std::string hydraulic_oil_tank_fill_level;
  std::string hydraulic_oil_pressure;

public:
  HydraulicSystemMonitor();
  std::string getTemperature() const;
  std::string getTankFillLevel() const;
  std::string getPressure() const;
};