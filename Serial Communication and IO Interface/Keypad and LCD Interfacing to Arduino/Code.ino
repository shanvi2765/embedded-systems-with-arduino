#include <Keypad.h>

#include <LiquidCrystal.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {13,12,11,10};
byte colPins[COLS] = {9,8,1,0};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys),rowPins,colPins,ROWS,COLS);
LiquidCrystal lcd(7,6,5,4,3,2);

void setup()
{
  lcd.begin(16,2);
  lcd.print("Hello World");
  delay(2000);
  lcd.clear();
  lcd.blink();
  lcd.setCursor(0,0);
}

void loop()
{
  char customKey = customKeypad.getKey();
  if (customKey){
    lcd.print(customKey);
  }
}

