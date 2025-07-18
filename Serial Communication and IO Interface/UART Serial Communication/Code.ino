char mystr[20];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.readBytes(mystr, 20);
  Serial.println(mystr);
  delay(1000);
}