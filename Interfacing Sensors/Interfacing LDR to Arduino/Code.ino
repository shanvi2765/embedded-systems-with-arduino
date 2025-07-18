int ldrpin = A0;
int ledpin = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(ldrpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  int ldrvalue = analogRead(ldrpin);
  Serial.println(ldrvalue);
  
  if (ldrvalue > 500){
    digitalWrite(ledpin, HIGH);
    Serial.println("LDR is DARK, LED is ON...");
  }
  else{
    digitalWrite(ledpin, LOW);
    Serial.println("LED is OFF");
  }
}