void setup()
{
  pinMode(13, OUTPUT); //Red
  pinMode(12, OUTPUT); //Yellow
  pinMode(11, OUTPUT); //Green
  pinMode(7, OUTPUT); //Buzzer
}

void loop()
{
  digitalWrite(13, HIGH);
  if (digitalRead(13) == HIGH){
    tone(7,1000);
  }
  delay(1000); 
  digitalWrite(13, LOW);
  
  digitalWrite(12, HIGH);
  if (digitalRead(12) == HIGH){
    tone(7,500);
  }
  delay(1000); 
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  if (digitalRead(11) == HIGH){
    tone(7,250);
  }
  delay(1000); 
  digitalWrite(11, LOW);
}