#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  //In thông báo trên LCD
  lcd.print("hello, world!");
}
void loop() {
  //Tắt con trỏ
  lcd.noCursor();
  delay(500);
  //Hiện con trỏ
  lcd.cursor();
  delay(500);
}
