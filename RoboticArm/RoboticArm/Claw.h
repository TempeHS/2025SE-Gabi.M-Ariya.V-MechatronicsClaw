#ifndef CLAW_H
#define CLAW_H

#include <Arduino.h>
#include "MyServo.h"

class Claw : public MyServo
{
private:
  
public:
  Claw() {}//do not use
  Claw(byte pin);

  void open();
  void close();
};

#endif