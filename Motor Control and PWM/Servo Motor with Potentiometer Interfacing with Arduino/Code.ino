#include <Servo.h>

Servo myServo;

int angle;

void setup()
{
  myServo.attach(9);
}

void loop()
{
  int potValue = analogRead(A0);
  
  angle = map(potValue,0,1023,0,180);
  myServo.write(angle);
  delay(20);
}
