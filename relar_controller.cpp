#include "relay_controller.h"
#include "../include/pins.h"
 
void RelayController::begin() {
  pinMode(PIN_RELAY_FAN, OUTPUT);
  pinMode(PIN_RELAY_SPRINKLER, OUTPUT);

  // Fail-safe OFF (active LOW relays)
  digitalWrite(PIN_RELAY_FAN, HIGH);
  digitalWrite(PIN_RELAY_SPRINKLER, HIGH);

  fanState = false;
  sprinklerState = false;
}
 
void RelayController::setFan(bool on) {
  fanState = on;

  // active LOW relay logic
  digitalWrite(PIN_RELAY_FAN, on ? LOW : HIGH);
}

 
void RelayController::setSprinkler(bool on) {
  sprinklerState = on;

  // active LOW relay logic
  digitalWrite(PIN_RELAY_SPRINKLER, on ? LOW : HIGH);
}
 
void RelayController::allOff() {
  setFan(false);
  setSprinkler(false);
}
