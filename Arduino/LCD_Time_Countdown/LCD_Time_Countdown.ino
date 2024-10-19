#include <LiquidCrystal.h>
const int rs=3,en=2,d4=11,d5=10,d6=9,d7=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int hours=12;
int minutes=60;
int seconds=60;
int countdown;
int i;

void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print('H');
  lcd.setCursor(8,0);
  lcd.print('M');
  lcd.setCursor(15,0);
  lcd.print('S');
  
  for (i = 0; i < 61; i++) {
  lcd.setCursor(15,1);
  lcd.print(i);
}
  
  
}
