int o_LEDPin = 9;

void setup()
{
  pinMode(o_LEDPin, OUTPUT);
}

void loop()
{
  digitalWrite(o_LEDPin, HIGH);
  delay(500); 
  digitalWrite(o_LEDPin, LOW);
  delay(500); 
}