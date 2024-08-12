#ifndef ARM_H
#define ARM_H

#include <Arduino.h>
#include <Servo.h>

class Arm
{
private:
  int pin;
  Servo servo;
public:
  Arm() {}//do not use
  Arm(int pin);

  void init();
  void moveUp();
  void moveDown();
};

#endif