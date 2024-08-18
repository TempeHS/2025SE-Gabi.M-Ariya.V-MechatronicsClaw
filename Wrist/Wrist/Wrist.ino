#include "Wrist.h"

Wrist wrist(10);

Servo myServo;

void setup() {
  Serial.begin(9600);
  wrist.init();
}

void loop() {
  wrist.moveUp();
  delay(1000);
  wrist.moveDown();
  delay(1000);
}
