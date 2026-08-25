/**
 * @file esp32-water-quality-monitoring.ino
 * @brief ESP32 Water Quality & pH Turbidity Telemetry
 * @author Muhammad Fikri (Laksanasoft)
 * @license MIT
 */

#include <OneWire.h>
#include <DallasTemperature.h>

#define PIN_ONE_WIRE_BUS 4
#define PIN_PH_SENSOR    32
#define PIN_TURBIDITY    33

OneWire oneWire(PIN_ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200);
  sensors.begin();
  Serial.println("Laksanasoft Water Quality Station Initialized.");
}

float readPH() {
  int raw = analogRead(PIN_PH_SENSOR);
  float voltage = raw * (3.3 / 4095.0);
  // Calibration slope (typical: 3.5 * voltage)
  return (3.5 * voltage);
}

float readTurbidityNTU() {
  int raw = analogRead(PIN_TURBIDITY);
  float voltage = raw * (3.3 / 4095.0);
  float ntu = -1120.4 * sq(voltage) + 5742.3 * voltage - 4353.8;
  if (ntu < 0) ntu = 0;
  return ntu;
}

void loop() {
  sensors.requestTemperatures();
  float waterTemp = sensors.getTempCByIndex(0);
  float phVal = readPH();
  float turbidity = readTurbidityNTU();

  Serial.printf("Water Temp: %.2f C | pH: %.2f | Turbidity: %.1f NTU
", waterTemp, phVal, turbidity);

  delay(2000);
}
