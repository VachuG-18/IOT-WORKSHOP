#include <LiquidCrystal.h>
const int rs=3,en=2,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(3,0);
  lcd.print("vatchala");
  delay(1000);
  lcd.setCursor(7,1);
  lcd.print("MCA");
  delay(3000);
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("MC4312");
  delay(1000);
  lcd.setCursor(7,1);
  lcd.print("IoT");
  delay(3000);
  lcd.clear();
  
  
}
