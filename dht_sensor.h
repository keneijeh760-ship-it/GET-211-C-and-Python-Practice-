#pragma once

#include <Arduino.h>

class DHTSensor {
public:
  void begin();
  bool read(float &temperature, float &humidity);
  bool isHealthy() const;

private:
  float lastTemp = 0.0;
  float lastHum = 0.0;
  bool healthy = false;
};
