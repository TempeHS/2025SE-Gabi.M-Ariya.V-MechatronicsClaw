#ifndef ROBOTIC_ARM_H
#define ROBOTIC_ARM_H

#include "Arm.h"
#include "Base.h"
#include "Claw.h"
#include <Arduino.h>

class RoboticArm 
{
private:
  Base base;
  Arm arm;
  Claw claw;

public:
  RoboticArm() {} //do not use
  RoboticArm(Base &base, Arm &arm, Claw &claw);
  void init();
  void moveToStartPosition();
  void moveToCubePosition(bool isLeft);
  void grabCube();
  void releaseCube();
  void operateArm();
  // void detectColour();
};

#endif