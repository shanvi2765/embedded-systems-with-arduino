int sensorstate = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorstate = digitalRead(2);
  Serial.println(sensorstate);
  
  if (sensorstate == HIGH){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  delay(10);
}