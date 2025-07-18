int timer = 500;
  
void setup()
{
  for (int thisPin = 3; thisPin < 6; thisPin++){
    pinMode(thisPin, OUTPUT);
  }
}

void loop()
{
  for (int thisPin = 3; thisPin < 6; thisPin++){
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }
  for (int thisPin = 5; thisPin >= 3; thisPin--){
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }
}
    