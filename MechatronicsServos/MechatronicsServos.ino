#define BASE_PIN 8

class servo
{
private:
  byte pin;
public:
  Led() {} // do not use

  Led(byte pin)
  {
    this->pin = pin;
  }
  void init()
  {

  }
  void left()
};

void setup() {
  pinMode(LED_PIN, OUTPUT)
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW)
  delay(500);
}