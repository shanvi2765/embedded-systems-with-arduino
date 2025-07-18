boolean ledOn = false;
int o_BUZZERPin = 8;
int o_REDLEDPin = 13;
int o_GREENLEDPin = 4;
int i_PushButton = 2;

void setup()
{
  pinMode(o_BUZZERPin, OUTPUT);
  pinMode(o_REDLEDPin, OUTPUT);
  pinMode(o_GREENLEDPin, OUTPUT);
  pinMode(i_PushButton, INPUT);
  
  digitalWrite(4, HIGH);
  
  attachInterrupt(digitalPinToInterrupt(2), ButtonPressed, RISING);
}

void loop()
{

}

void ButtonPressed()
{
  if (ledOn){
    digitalWrite(o_GREENLEDPin, HIGH);
    noTone(o_BUZZERPin);
    ledOn = false;
    digitalWrite(o_REDLEDPin, LOW);
  }
  else{
    digitalWrite(o_GREENLEDPin, LOW);
    tone(o_BUZZERPin,250);
    ledOn = true;
    digitalWrite(o_REDLEDPin, HIGH);
  }
}
    
  
  
  
  
  
  