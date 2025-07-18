int o_ledPin = 9;
int brightness = 0;
int fadeamount = 5;

void setup()
{
  pinMode(o_ledPin, OUTPUT);
}

void loop()
{
  analogWrite(o_ledPin, brightness);
  brightness = brightness + fadeamount;
  
  if (brightness == 0 || brightness == 255){
    fadeamount = -fadeamount;
  }
  delay(20);
}