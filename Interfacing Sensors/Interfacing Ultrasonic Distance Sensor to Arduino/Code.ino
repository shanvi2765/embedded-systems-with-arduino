int trigpin = 10;
int echopin = 9;
int time;
int distance;

void setup()
{
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  
  time = pulseIn(echopin, HIGH);
  Serial.print("Time:");
  Serial.println(time);
  
  distance = time * 0.0343/2;
  
  Serial.print("Distance (in cm):");
  Serial.println(distance);
}



