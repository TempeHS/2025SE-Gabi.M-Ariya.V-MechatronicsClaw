#include "RoboticArm.h"

RoboticArm roboticArm(9, 10, 11, 12);


void setup() {
  Serial.begin(9600);
  roboticArm.init();
}

void loop() {
  roboticArm.operateArm();
}
