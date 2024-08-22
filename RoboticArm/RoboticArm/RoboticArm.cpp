#include "RoboticArm.h"
#include <Arduino.h>

RoboticArm::RoboticArm(Base &base, Arm &arm, Claw &claw)
    : base(base), arm(arm), claw(claw) {}


void RoboticArm::init()
{
  base.init();
  arm.init();
  claw.init();
}

void RoboticArm::moveToStartPosition()
{ 
  arm.moveDown();
  delay(50);
  claw.open();
  delay(50);
}

void RoboticArm::moveToCubePosition(bool isLeft)
{
  if(isLeft) {
    base.moveLeft();
    delay(100);
  } else {
    base.moveRight();
    delay(100);
  }

}

void RoboticArm::grabCube()
{
  claw.close();
  delay(50);
  arm.moveUp();
  delay(50);
}

void RoboticArm::releaseCube()
{
  arm.moveDown();
  delay(50);
  claw.open();
  delay(50);
  
}

void RoboticArm::operateArm()
{
  moveToStartPosition();
  delay(3000);

  bool isLeft = random(2) == 0;
  moveToCubePosition(isLeft);
  delay(5000);
}
