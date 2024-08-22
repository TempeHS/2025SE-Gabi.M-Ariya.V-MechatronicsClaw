#ifndef ARM_H
#define ARM_H

#include <Arduino.h>
#include "MyServo.h"

class Arm : public MyServo

{
private:
  
public:
  Arm() {}//do not use
  Arm(byte pin);
  
  void moveUp();
  void moveDown();
};

#endif