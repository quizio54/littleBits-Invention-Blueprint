# Assembly Instructions - Self-Watering Plant System

This guide walks you through the physical construction of the self-watering plant system using littleBits modules and additional hardware.

## Before You Start
- Gather all components listed in the Bill of Materials.
- Work on a clean, dry surface.
- Ensure the littleBits power is **OFF** during assembly.

## Step 1: Prepare the Water Reservoir
1. Take the small water container (≥ 500 ml) and make a small hole in the lid large enough to pass the vinyl tubing.
2. Insert one end of the vinyl tubing through the hole, leaving about 5 cm inside the container.
3. Use hot glue or waterproof tape to seal around the tube to prevent leaks.
4. Fill the container with water and close the lid securely.

## Step 2: Mount the Water Pump
1. Connect the submersible water pump to the free end of the vinyl tubing.
2. Place the pump inside the water reservoir, ensuring it is fully submerged.
3. Route the tubing from the reservoir to the plant pot location.

## Step 3: Build the littleBits Control Circuit
1. **Power Module:** Connect the 9V battery cable to the power module.
2. **Moisture Sensor:** Attach the moisture sensor to the power module.
3. **Threshold:** Connect the threshold module to the moisture sensor. Adjust the threshold knob to about halfway (you will calibrate later).
4. **Inverter (optional):** If you want the system to water when the soil is dry, you may need an inverter after the threshold. Connect it now.
5. **LED Indicator:** Plug an LED module after the inverter (or directly after threshold if no inverter) to give a visual signal when watering is active.
6. **Servo Driver:** Connect the servo module to the LED output. This servo will control the water pump’s power.
7. **External Pump Connection:** Use jumper wires to connect the servo output to the water pump’s positive and negative leads. (If your pump requires a relay, connect the relay to the servo and the pump to the relay.)

## Step 4: Install the Moisture Sensor in Soil
1. Fill the plant pot with potting soil.
2. Insert the moisture sensor probes into the soil, about 3‑4 cm deep and 5 cm apart.
3. Gently pack the soil around the probes to ensure good contact.

## Step 5: Connect the Pump to the Plant
1. Place the plant pot near the water reservoir.
2. Run the vinyl tubing from the pump to the plant pot.
3. Secure the tubing’s open end above the soil surface (use a small clip or tape to hold it in place).

## Step 6: Final Wiring Check
1. Verify all littleBits connections are snug and the circuit is complete.
2. Ensure no bare wires are touching each other.
3. Double‑check that the pump’s polarity is correct (positive to positive, negative to negative).

## Step 7: Calibration & Testing
1. Turn the power ON.
2. Observe the LED: if the soil is dry, the LED should light up and the servo should activate the pump.
3. Adjust the threshold knob until the system triggers at the desired moisture level.
4. Test by adding a little water to the soil; the LED should turn off and the pump should stop.

## Visual Guides (Placeholder Images)
- `step1.jpg` – Preparing the water reservoir
- `step2.jpg` – Mounting the water pump
- `step3.jpg` – littleBits circuit layout
- `step4.jpg` – Moisture sensor placement in soil
- `step5.jpg` – Tubing routing
- `step6.jpg` – Final wiring overview
- `step7.jpg` – Calibration with threshold knob

**Note:** In a real classroom setting, take photographs of each step and replace these placeholders with actual images.

## Safety Reminder
- Keep electrical components away from water spills.
- Do not touch the moisture sensor probes while the circuit is powered.
- Always turn off power before making any changes to the circuit.

---
*Assembly instructions are based on the standard littleBits STEM Invention Toolbox and can be adapted for different plant sizes or pump types.*