const int mPin = 7;
const int motorPin = 13;
int moisture = 0;
void setup() 
{
  pinMode(motorPin, OUTPUT);
  pinMode(mPin, INPUT);
}
void loop() 
{
  moisture = digitalRead(mPin);
  if (moisture == LOW) 
  {
    digitalWrite(motorPin, HIGH);
    delay(1000);
  } 
  else 
  {
    digitalWrite(motorPin, LOW);
  }
}