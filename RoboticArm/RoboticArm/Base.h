#ifndef BASE_H
#define BASE_H

#include "MyServo.h"

class Base
{
private:
  int pin;
public:
  // Base() {} //do not use(default constructor)
  Base(int pin);
  void moveLeft();
  void moveRight();
};

#endif