# 💧 ESP32 Water Quality & Aquatic Telemetry Station

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: ESP32](https://img.shields.io/badge/Platform-ESP32-blue.svg)](https://espressif.com/)
[![Sensor: pH & Turbidity](https://img.shields.io/badge/Sensors-pH%20%26%20Turbidity-cyan.svg)](#)
[![Portfolio: Laksanasoft](https://img.shields.io/badge/Portfolio-Laksanasoft-green.svg)](#)

A real-time environmental water quality monitoring station powered by the **ESP32**. Specifically engineered for aquaculture, water treatment facilities, and river pollution tracking by integrating analog pH probe sensors, optical turbidity meters, and waterproof digital temperature probes (DS18B20).

---

## 📌 Monitored Parameters

- **Acidity / Alkalinity (pH):** Analog pH electrode with two-point temperature compensation.
- **Optical Turbidity (NTU):** Measures water clarity and total suspended solids (TSS).
- **Water Temperature (DS18B20):** Waterproof probe operating over 1-Wire bus (-55°C to +125°C).
- **ThingsBoard / MQTT Ready:** Telemetry published seamlessly in JSON format.

---

## 🔌 Sensor Pinout

```
+--------------------+-----------------------+-------------------+
| ESP32 Pin          | Sensor                | Description       |
+--------------------+-----------------------+-------------------+
| GPIO 32 (ADC1)     | Analog pH Probe Signal| pH Level (0-14)   |
| GPIO 33 (ADC1)     | Analog Turbidity A0   | Water Clarity NTU |
| GPIO 4             | DS18B20 Data (1-Wire) | 4.7k Pull-up      |
+--------------------+-----------------------+-------------------+
```

---

## 📄 License
MIT License. Developed for **Laksanasoft Portfolio**.
