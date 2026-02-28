#include "dht_sensor.h"
#include "../include/pins.h"
#include <DHT.h>
 
#define DHTTYPE DHT22
static DHT dht(PIN_DHT, DHTTYPE);

void DHTSensor::begin() {
  dht.begin();
}

bool DHTSensor::read(float &temperature, float &humidity) {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  
  if (isnan(t) || isnan(h)) {
    healthy = false;
    return false;
  }

   
  lastTemp = t;
  lastHum = h;
  healthy = true;

  temperature = t;
  humidity = h;

  return true;
}
 
bool DHTSensor::isHealthy() const {
  return healthy;
}
