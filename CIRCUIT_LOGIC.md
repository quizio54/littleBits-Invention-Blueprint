# Circuit Logic & Code - Self-Watering Plant System

This document explains the electronic logic behind the self-watering plant system and provides example code for the Arduino bit (if used).

## System Overview
The invention uses a **moisture sensor** to measure soil wetness. When the moisture level drops below a set threshold, the circuit triggers a **servo** that turns on a water pump until the soil reaches adequate moisture again.

## Block Diagram
```
[Power] → [Moisture Sensor] → [Threshold] → [Inverter (optional)] → [LED] → [Servo] → [Water Pump]
```

## How Each Module Works
1. **Power Module** – Supplies 5V to the entire circuit.
2. **Moisture Sensor** – Outputs an analog voltage proportional to soil conductivity (higher moisture = higher voltage).
3. **Threshold Module** – Compares the sensor voltage with a user‑adjustable reference. When sensor voltage **falls below** the threshold (dry soil), the threshold outputs LOW (0V). When sensor voltage is above (wet soil), output is HIGH (5V).
4. **Inverter Module** – Optional. If you want the pump to activate when the soil is dry, you can invert the threshold output: dry soil → HIGH, wet soil → LOW.
5. **LED Module** – Visual indicator that lights when the pump is activated.
6. **Servo Module** – Converts a control signal into mechanical rotation. In this project, the servo is used as a switch: when triggered, it closes a circuit that powers the water pump.
7. **Water Pump** – A small DC pump that moves water from the reservoir to the plant.

## Logic Table (without inverter)
| Soil Moisture | Threshold Output | LED | Servo/Pump |
|---------------|------------------|-----|------------|
| Wet (above threshold) | HIGH | OFF | OFF |
| Dry (below threshold) | LOW | ON | ON |

## Using the Arduino Bit (Optional)
If you replace the threshold+inverter+servo chain with an **Arduino bit**, you can program custom behavior (e.g., timed watering, data logging, multiple sensors).

### Pin Mapping
- Moisture sensor → Analog input A0
- Servo control → Digital output D9
- LED indicator → Digital output D13 (built‑in LED)

### Example Arduino Sketch
See `code/self_watering_plant.ino` for a complete example.

## Calibration Procedure
1. Insert the moisture sensor in **dry soil** and note the analog reading (use Arduino Serial Monitor).
2. Insert the sensor in **fully watered soil** and note the reading.
3. Set the threshold knob to a value between those two readings.
4. Test by letting the soil dry; the pump should activate automatically.

## Troubleshooting Logic Issues
- **Pump runs continuously:** Threshold set too low; adjust knob clockwise.
- **Pump never runs:** Threshold set too high; adjust knob counter‑clockwise.
- **LED does not light:** Check connections between threshold and LED; verify power.
- **Servo not moving:** Ensure servo is connected to a power source capable of providing enough current (use external battery if needed).

## Extensions & Modifications
- Add a **timer module** to limit watering duration.
- Use a **temperature sensor** to adjust watering based on ambient heat.
- Implement **Wi‑Fi or Bluetooth** connectivity to monitor soil moisture remotely.

---
*This logic is based on standard littleBits modules and can be adapted for more advanced control systems.*