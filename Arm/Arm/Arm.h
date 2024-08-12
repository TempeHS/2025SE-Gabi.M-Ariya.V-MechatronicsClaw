#ifndef ARM_H
#define ARM_H

#include <Arduino.h>

class Arm
{
private:
  int pin;
public:
  Arm() {}//do not use
  Arm(int pin);

  void init();
  void moveUp();
  void moveDown();
  void writeValue();
};

#endif