#ifndef WRIST_H
#define WRIST_H

#include <Arduino.h>
#include <Servo.h>

class Wrist
{
private:
  int pin;
  Servo servo;
public:
  Wrist() {}//do not use
  Wrist(int pin);

  void init();
  void moveUp();
  void moveDown();
};

#endif