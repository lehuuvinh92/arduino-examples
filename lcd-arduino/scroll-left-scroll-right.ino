#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  lcd.print("HELLO ARDUINO!");
  delay(1000);
}
void loop() {
  //Cuộn 13 vị trí sang trái
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    //Cuộn 1 vị trí sang trái
    lcd.scrollDisplayLeft();
    delay(150);
  }
  //Cuộn 29 vị trí sang phải
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    //Cuộn 1 vị trí sang phải
    lcd.scrollDisplayRight();
    delay(150);
  }
  //Cuộn 16 vị trí sang trái
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // Cuộn 1 vị trí sang trái
    lcd.scrollDisplayLeft();
    delay(150);
  }
  delay(1000);
}
