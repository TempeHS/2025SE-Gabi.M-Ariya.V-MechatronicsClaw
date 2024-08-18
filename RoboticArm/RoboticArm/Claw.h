#ifndef CLAW_H
#define CLAW_H

#include <Arduino.h>
#include "MyServo.h"
class Claw
{
private:
  int pin;
  // Servo servo;
public:
  Claw() {}//do not use
  Claw(int pin);

  void init();
  void grabCube();
  void releaseCube();
};

#endif