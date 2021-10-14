#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  //In thông báo ra LCD
  lcd.print("hello, world!");
}
void loop() {
  //Tắt blink con trỏ
  lcd.noBlink();
  delay(3000);
  //Bật blink con trỏ
  lcd.blink();
  delay(3000);
}
