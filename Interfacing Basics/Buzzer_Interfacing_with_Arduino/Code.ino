int o_BUZZERPin = 9;

void setup()
{
  pinMode(o_BUZZERPin, OUTPUT);
}

void loop()
{
  tone(o_BUZZERPin, 100);
  delay(200);
  tone(o_BUZZERPin, 400);
  delay(200);
  tone(o_BUZZERPin,600);
  delay(200);
  noTone(o_BUZZERPin);
  delay(2000);
}