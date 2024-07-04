
const int bPin = 2;
const int lPin = 13;
int button =0;
void setup() 
{
  pinMode(lPin, OUTPUT);
  pinMode(bPin, INPUT);
}
void loop() 
{
  button = digitalRead(bPin);
  if (button == HIGH) 
  {
    digitalWrite(lPin, HIGH);
    delay(1000);
  } 
  else 
  {
    digitalWrite(lPin, LOW);
  }
}