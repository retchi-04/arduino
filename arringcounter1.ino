void setup() {
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
}
