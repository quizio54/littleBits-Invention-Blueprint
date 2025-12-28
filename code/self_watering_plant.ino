/*
  Self-Watering Plant System - Arduino Sketch
  For use with littleBits Arduino bit and moisture sensor.
  
  This sketch reads soil moisture from analog pin A0,
  compares it with a defined threshold, and activates a servo
  (connected to pin D9) to turn on a water pump when the soil is too dry.
  
  The built-in LED (pin 13) lights up while watering.
*/

#include <Servo.h>

// Pin definitions
const int moisturePin = A0;   // Moisture sensor analog input
const int servoPin = 9;       // Servo control pin (PWM)
const int ledPin = 13;        // Built-in LED

// Threshold values (adjust based on your sensor calibration)
const int dryThreshold = 400;   // Sensor reading for dry soil
const int wetThreshold = 700;   // Sensor reading for adequately wet soil

// Servo angles for pump ON/OFF
const int servoOffAngle = 0;    // Servo position that opens the pump circuit
const int servoOnAngle = 90;    // Servo position that closes the pump circuit

// Watering duration in milliseconds (adjust as needed)
const unsigned long wateringTime = 5000;  // 5 seconds

Servo pumpServo;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pumpServo.attach(servoPin);
  
  // Initialize servo to OFF position
  pumpServo.write(servoOffAngle);
  digitalWrite(ledPin, LOW);
  
  Serial.println("Self-Watering Plant System ready.");
  Serial.println("Dry threshold: " + String(dryThreshold));
  Serial.println("Wet threshold: " + String(wetThreshold));
}

void loop() {
  int moistureValue = analogRead(moisturePin);
  Serial.print("Moisture reading: ");
  Serial.println(moistureValue);
  
  // If soil is dry, start watering
  if (moistureValue < dryThreshold) {
    Serial.println("Soil is dry - watering started.");
    digitalWrite(ledPin, HIGH);
    pumpServo.write(servoOnAngle);
    delay(wateringTime);
    pumpServo.write(servoOffAngle);
    digitalWrite(ledPin, LOW);
    Serial.println("Watering completed.");
    // Wait a moment to allow water to soak in before next reading
    delay(2000);
  }
  
  // If soil is already wet, do nothing
  else if (moistureValue > wetThreshold) {
    Serial.println("Soil is wet - no watering needed.");
  }
  
  // Soil moisture is between thresholds (transition zone)
  else {
    Serial.println("Soil moisture adequate - monitoring.");
  }
  
  // Wait before next reading (adjust interval as needed)
  delay(3000);
}