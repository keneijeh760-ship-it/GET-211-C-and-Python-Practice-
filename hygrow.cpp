#include <Arduino.h>
#include "include/config.h"
#include "include/pins.h"
#include "sensors/dht_sensor.h"
#include "actuators/relay_controller.h"
#include "include/config.h"

DHTSensor dhtSensor;
RelayController relay;

float currentTemp = 0.0;
float currentHum = 0.0;

void initHardware();
void readSensorsTask();
void controlTask();
void actuatorTask();
void commsTask();
void alertTask();
void watchdogTask();

void setup() {
  Serial.begin(115200);
  Serial.println("Hygrow system booting...");

  initHardware();
  dhtSensor.begin();
}

void loop() {
  readSensorsTask();
  controlTask();
  actuatorTask();
  commsTask();
  alertTask();
  watchdogTask();

  delay(1000);
}

void initHardware() {
  relay.begin();
  Serial.println("Hardware initialized.");
}

void readSensorsTask() {
  static unsigned long lastRead = 0;

  if (millis() - lastRead < SENSOR_INTERVAL_MS) {
    return;
  }

  lastRead = millis();

  float temp = 0.0;
  float hum = 0.0;

  if (dhtSensor.read(temp, hum)) {
    
    currentTemp = temp;
    currentHum = hum;

    Serial.print("Temp: ");
    Serial.print(currentTemp);
    Serial.print(" °C | Humidity: ");
    Serial.print(currentHum);
    Serial.println(" %");
  } else {
    Serial.println("DHT read failed! Keeping last good values.");
  }
}

void controlTask() {}

void actuatorTask() {

  if (!dhtSensor.isHealthy()) {
    relay.allOff();
    return;
  }
 
  if (currentTemp > 30.0) {
    relay.setFan(true);
  } else {
    relay.setFan(false);
  }
}

void commsTask() {}
void alertTask() {}
void watchdogTask() {}
