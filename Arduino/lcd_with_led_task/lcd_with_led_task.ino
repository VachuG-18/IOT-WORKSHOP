#include <LiquidCrystal.h>
const int rs=3,en=2,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int led=13;


void setup() {
  lcd.begin(16,2);
}  
void loop() {
  lcd.setCursor(3,0);
  int data = lcd.print("welcome");
  delay(1000);
  digitalWrite(led,HIGH);
  delay(3000);
  
  do{
    lcd.setCursor(4,1);
    lcd.print("LED ON");
  }
  while(led==HIGH);
}
