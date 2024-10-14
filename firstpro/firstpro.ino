int led=13,i;
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  for(i;i<5;i++)   w   
  {
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
  }
}
