int red=13;
int yellow=8;
int green=3;
int gas=A3;

void setup(){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(gas,INPUT);
  Serial.begin(9600);
}
void loop(){
  int data=analogRead(gas);
  Serial.println(data);
  delay(1000);

  if(data>=100){
    digitalWrite(red,HIGH);
    delay(1000);
    digitalWrite(red,LOW);
    
  }
  else if(data>=50){
    digitalWrite(yellow,HIGH);
    delay(1000);
    digitalWrite(yellow,LOW);
   
  }
  else{
    digitalWrite(green,HIGH);
    delay(1000);
    digitalWrite(green,LOW);
    
  }
}
