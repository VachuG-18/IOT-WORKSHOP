int gas=A3;
void setup() {
  pinMode(gas,INPUT);
  Serial.begin(9600);
}

void loop() {
  int data=analogRead(gas);
  Serial.println(data);
  delay(1000);
}
