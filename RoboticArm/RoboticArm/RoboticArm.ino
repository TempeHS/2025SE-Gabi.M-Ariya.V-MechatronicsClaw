#include "RoboticArm.h"

#define BASE_PIN 9
#define ARM_PIN 10
#define CLAW_PIN 11


Base base(BASE_PIN);
Arm arm(ARM_PIN);
Claw claw(CLAW_PIN);

RoboticArm roboticArm(base, arm, claw);

void setup() {
  Serial.begin(9600);
}

void loop() {
  roboticArm.moveToStartPosition();
  roboticArm.operateArm();
  roboticArm.grabCube();
  roboticArm.releaseCube();
  delay(3000);
}
