// Project  - Servo Motor Interfacing with Arduino Uno
// Programmed By :  KAVIKUMARAN
// Visit Our Website : Sololearners.com

#include <Servo.h>

Servo myServo;
const int servo1 = 3;


void setup() {
  myServo.attach(servo1); // Servo signal pin connected to pin 3
}

void loop() {
  myServo.write(0);    // Move to 0°
  delay(1000);

  myServo.write(90);   // Move to 90°
  delay(1000);

  myServo.write(180);  // Move to 180°
  delay(1000);
}
