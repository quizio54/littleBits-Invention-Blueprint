# Final Testing & Troubleshooting Guide

This document provides a step‑by‑step procedure to test your self‑watering plant system and diagnose common problems.

## Pre‑Test Checklist
Before powering on, verify the following:
- [ ] All littleBits modules are securely snapped together.
- [ ] Moisture sensor probes are inserted into the soil, not touching each other.
- [ ] Water pump is fully submerged in the reservoir.
- [ ] Vinyl tubing is properly connected and not kinked.
- [ ] Battery is fresh (9V) or power supply is plugged in.
- [ ] Threshold knob is set to approximately the middle position.

## Systematic Testing Procedure

### 1. Power‑On Test
1. Turn the power switch ON.
2. Observe the LED:
   - If the LED lights immediately, the soil is likely dry (threshold triggered).
   - If the LED stays off, the soil may already be wet enough.
3. If the LED does not light at all, check power connections and battery.

### 2. Moisture Sensor Test
1. Gently pour a small amount of water around the moisture sensor probes.
2. Wait 10‑20 seconds for the water to soak in.
3. The LED should turn off (if it was on) because the soil moisture increased above the threshold.
4. If the LED does not change, adjust the threshold knob counter‑clockwise (lower threshold) and repeat.

### 3. Pump Activation Test
1. Ensure the soil is dry (or simulate dryness by removing the sensor from soil).
2. The LED should light up and the servo should move (you may hear a faint whirring sound).
3. Verify that the water pump starts and water flows through the tubing.
4. If the pump does not run:
   - Check that the servo is properly connected to the pump circuit.
   - Ensure the pump’s wires are securely attached to the servo outputs.
   - Test the pump directly by connecting it to a 3‑5V battery pack.

### 4. Automatic Shut‑Off Test
1. While the pump is running, pour water around the moisture sensor.
2. Within a few seconds, the LED should turn off and the pump should stop.
3. If the pump continues running, the threshold may be set too low; turn the knob clockwise to raise the threshold.

## Common Problems & Solutions

| Symptom | Possible Cause | Solution |
|---------|----------------|----------|
| **No power / LED off** | Dead battery, loose connection | Replace battery, reseat all bitSnaps. |
| **LED always on** | Threshold set too high, moisture sensor not making good soil contact | Lower threshold (turn knob counter‑clockwise), ensure sensor probes are deep enough in soil. |
| **LED always off** | Threshold set too low, moisture sensor shorted or damaged | Raise threshold (clockwise), check sensor for damage, clean probes. |
| **Pump does not run** | Pump not submerged, tubing blocked, servo not triggering | Submerge pump, clear tubing, verify servo movement, test pump with direct power. |
| **Pump runs but no water** | Air lock in tubing, pump impeller stuck | Prime the pump by temporarily lifting it above water level, then resubmerge. Gently tap pump to free impeller. |
| **Water leaks** | Poor seal around tubing in reservoir | Apply hot glue or silicone sealant around the tube entry point. |
| **System waters too frequently** | Threshold too sensitive, soil not retaining moisture | Increase threshold (clockwise), consider adding a timer module to limit watering duration. |
| **System never waters** | Threshold too high, moisture sensor placed in wet spot | Lower threshold, move sensor to a drier part of the pot. |

## Calibration Tips
- **Ideal threshold setting:** Start with the knob at 12 o’clock. Observe the LED while adding water to the soil. Adjust until the LED turns off just after the soil becomes moist to the touch.
- **Sensor placement:** Insert probes near the plant’s roots, but avoid direct contact with the pot’s drainage hole where water may accumulate.
- **Environmental factors:** High ambient temperature may dry soil faster; you may need to adjust the threshold seasonally.

## Safety Checks
- **Electrical safety:** Never handle wet components while the circuit is powered.
- **Water safety:** Use a water‑proof container for the reservoir and place it on a stable, level surface.
- **Plant safety:** Ensure the watering duration is not so long that the plant becomes waterlogged.

## Final Validation
Once all tests pass, let the system run unattended for 24‑48 hours. Monitor the plant’s soil moisture and adjust the threshold if necessary. Congratulations—your self‑watering plant system is ready for long‑term use!

---
*This troubleshooting guide is designed for the littleBits STEM Invention Toolbox and can be adapted for similar DIY irrigation projects.*