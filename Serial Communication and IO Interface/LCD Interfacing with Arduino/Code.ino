#include <LiquidCrystal.h>

const int rs = 12, en = 11,d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup()
{
  lcd.begin(16,2);
  lcd.print("Hello World");
  delay(2000);
  
  for (int positionCount = 0; positionCount < 16; positionCount++){
    lcd.scrollDisplayRight();
    delay(150);
  }
  lcd.clear();
  lcd.setCursor(6,0);
  lcd.print("Count!");
}

void loop()
{
  lcd.setCursor(8,1);
  //print the number of seconds since reset
  lcd.print(millis()/1000);
}