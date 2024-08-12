#include "Claw.h"

Claw claw(11);
Servo servo;

void setup() {
  Serial.begin(9600);
  claw.init();
}

void loop() {
  claw.grabCube();
  delay(1000);
  claw.releaseCube();
  delay(1000);
}
