#ifndef BASE_H
#define BASE_H

#include <Arduino.h>
#include "MyServo.h"

class Base : public MyServo

{
protected: 

public:
  Base() {} //do not use(default constructor)
  Base(byte pin);

  void moveLeft();
  void moveRight();
};

#endif