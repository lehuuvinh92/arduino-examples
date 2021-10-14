#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  lcd.print("HELLO");
  lcd.setCursor(0, 1);
  lcd.print("ARDUINO");
}
void loop() {
lcd.noDisplay();//Tắt màn hình và không làm mất các ký tự trên LCD
delay(700);//chờ 0.7 giây
lcd.display();//Hiển thị màn hình trở lại
delay(700);//chờ 0.7 giây
}
