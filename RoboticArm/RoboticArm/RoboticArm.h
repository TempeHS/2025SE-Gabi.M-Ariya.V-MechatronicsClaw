#ifndef ROBOTIC_ARM_H
#define ROBOTIC_ARM_H

#include <Arduino.h>
#include "Base.h"

class RoboticArm 
{
private:
  Base base;
  Claw claw;
  Arm arm;
public:
  RoboticArm() {} //do not use
  RoboticArm(int pin);
  void init();
  void moveToStartPosition();
  void moveToCubePosition(bool isLeft);
  void grabCube();
  void releaseCube();
  void operateArm();
};

#endif