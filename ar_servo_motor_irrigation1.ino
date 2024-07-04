#include <Servo.h>
const int mPin = 7;

Servo myservo;  
int moisture = 0;
int pos = 0;    

void setup() 
{
  pinMode(mPin, INPUT);
  myservo.attach(6); 
}
void loop() 
{
  moisture = digitalRead(mPin);
  if (moisture == LOW) 
  {
    for (pos = 0; pos <= 180; pos += 1) 
    { 
    myservo.write(pos);              
    delay(10);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);
    } 
  }                  // waits 15 ms for the servo to reach the position
    
}