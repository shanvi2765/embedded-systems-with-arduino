int IR_remote = 0;

void setup()
{
  pinMode(3, INPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  IR_remote = digitalRead(3);
  Serial.println(IR_remote);
  
  if (IR_remote == LOW){
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  }
  else{
    digitalWrite(7,LOW);
  }
}