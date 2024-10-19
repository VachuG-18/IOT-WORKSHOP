int gas=A3;
int led=13;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(gas,INPUT);
  Serial.begin(9600);
}

void loop() {
 
  int data=analogRead(gas);
  Serial.println(data);
  delay(1000);
  
  if(data>=100)
  {
  digitalWrite(led,HIGH);
  delay(1000);
  }
  else
  {
  digitalWrite(led,LOW);
  delay(1000);
  }
}
