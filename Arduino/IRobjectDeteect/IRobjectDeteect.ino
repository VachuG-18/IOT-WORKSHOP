int led=13;
int ir=7;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(ir,INPUT);
}
void loop(){
  int data=digitalRead(ir);
  if(data==1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
