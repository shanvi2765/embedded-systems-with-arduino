const int motorPin1 = 11;
const int motorPin2 = 10;
const int slider = 2;

int buttonState;

void setup()
{
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(slider, INPUT);
}

void loop()
{
  buttonState = digitalRead(slider);
  
  if (buttonState == HIGH){
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  }
  else{
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  }
  delay(1000);
}