#include "RoboticArm.h"
#include <Arduino.h>

RoboticArm::RoboticArm(int basePin, int armPin, int clawPin) : base(BasePin), arm(ArmPin), claw(ClawPin)) {}

//init all servos
void RoboticArm::init()
{
  Serial.println("Initializing program");
  base.init();
}

void RoboticArm::moveToStartPosition()
{ 
  wrist.moveDown();
  arm.moveDown();
  claw.release();
  Serial.println("Centered");
}

void RoboticArm::moveToCubePosition(bool isLeft)
{
  if(isLeft) {
    base.moveLeft();
  } else {
    base.moveRight();
  }

}
void RoboticArm::grabCube()
{
  Serial.println("grabbing cube.");
  claw.grab();
}

void RoboticArm::releaseCube()
{
  Claw.release();
  Serial.println("cube released");
}

void RoboticArm::operateArm()
{
  moveToStartPosition();
  delay(3000);

  bool isLeft = random(2) == 0;
  moveToCubePosition();
  delay(5000);
}
