float sensorvalue;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorvalue = analogRead(A0);
  Serial.println(sensorvalue);
  
  if (sensorvalue >= 400){
    digitalWrite(13, HIGH);
    tone(3,1000);
  }
  else{
    digitalWrite(13, LOW);
    noTone(3);
  }
  delay(500);
}