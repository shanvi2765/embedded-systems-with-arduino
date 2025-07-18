int force = 0;
int freq = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  force = analogRead(A0);
  Serial.print("Force:");
  Serial.println(force);
  
  freq = map(force,0,1023,50,5000);
  
  if (freq > 500){
    tone(3, freq);
    Serial.println("Buzz!!!");
    Serial.print("Frequency:");
    Serial.println(freq);
  }
  else{
    noTone(3);
  }
}