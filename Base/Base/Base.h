#ifndef BASE_H
#define BASE_H

#include <Arduino.h>
#include <Servo.h>

class Base
{
private:
  int pin;
  Servo servo;
public:
  Base() {} //do not use(default constructor)
  Base(int pin);

  void init();
  void moveLeft();
  void moveRight();
};

#endif