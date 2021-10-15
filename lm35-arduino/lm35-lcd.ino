#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int lm35 = A0;//chân analog kết nối LM35 với Arduino
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  float tempCelsius = (5.0*analogRead(lm35)*100.0/1024.0);//độ C
  float tempFahrenheit =(tempCelsius * 1.8)+32;//độ F
  lcd.setCursor(0, 0);
  lcd.print("TEMP ");
  lcd.print(char(223));
  lcd.print("C:");
  lcd.print(tempCelsius);
  lcd.print(char(223));
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("TEMP ");
  lcd.print(char(223));
  lcd.print("F:");
  lcd.print(tempFahrenheit);
  lcd.print(char(223));
  lcd.print("F");
  delay(1000);
  lcd.clear();
}