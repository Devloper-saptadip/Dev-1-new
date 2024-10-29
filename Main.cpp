#include <ESP32Servo.h>

const int servoPins[6] = {13, 12, 14, 27, 26, 25};  // Specify GPIO pins for servos
Servo servos[6];  // Array to hold each servo object

void setup() {
  for (int i = 0; i < 6; i++) {
    servos[i].attach(servoPins[i]);  // Attach each servo to a pin
  }
}

void loop() {
  for (int i = 0; i < 6; i++) {
    servos[i].write(0);      // Move servo to 0 degrees
    delay(2000);             // Wait for 2 seconds
    servos[i].write(90);     // Move servo to 90 degrees
    delay(2000);             // Wait for 2 seconds
    servos[i].write(180);    // Move servo to 180 degrees
    delay(2000);             // Wait for 2 seconds
  }
}
