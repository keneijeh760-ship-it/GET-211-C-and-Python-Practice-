#pragma once

#include <Arduino.h>

class RelayController {
public:
  void begin();

  void setFan(bool on);
  void setSprinkler(bool on);

  void allOff();

private:
  bool fanState = false;
  bool sprinklerState = false;
};
