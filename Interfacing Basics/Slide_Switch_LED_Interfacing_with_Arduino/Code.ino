void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  boolean val = digitalRead(2);
  
  if (val){
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
}