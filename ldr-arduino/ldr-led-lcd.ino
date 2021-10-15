#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int ldr = A0;//chân analog kết nối LDR
int led = 9;
void setup() {
  lcd.begin(16, 2);
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(ldr);//lấy giá trị độ sáng từ 0 đến 1023
  lcd.setCursor(0, 0);
  lcd.print("LDR VALUE:");
  lcd.print(ldrValue);
  if(ldrValue <= 200){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}