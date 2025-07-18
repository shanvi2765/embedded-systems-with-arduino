#include <Wire.h>

int led = 4;
int x = 0;

void setup()
{
  pinMode(led, OUTPUT);
  Wire.begin(1);
  Wire.onReceive(ReceiveEvent);
}

void ReceiveEvent(int bytes)
{
  x = Wire.read();
  
  if (x == 1){
    digitalWrite(led, HIGH);
    delay(200);
  }
  else {
    digitalWrite(led, LOW);
    delay(200);
  }
}

void loop(){
  delay(20);
}

