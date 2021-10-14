#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//Khai báo các byte định nghĩa các ký tự mới
byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};
byte heart_h[8] = {
  B00000,
  B00000,
  B01010,
  B10101,
  B10001,
  B01010,
  B00100,  
  B00000
};
byte heart_f[8] = {
  B00000,
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,  
  B00000
};
byte ohm[8] = {
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B01010,  
  B11011
};
byte rect[8] = {
  B11111,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111
};
byte arrow_u[8] = {
  B00100,
  B01110,
  B11111,
  B00100,
  B00100,
  B00100,
  B00100,  
  B00100
}; 
byte arrow_d[8] = {  
  B00100,
  B00100,
  B00100,
  B00100,  
  B00100,  
  B11111,
  B01110,
  B00100
}; 
byte diamond[8] = {
  B00000,
  B00100,
  B01010,
  B10001,  
  B01010,
  B00100,
  B00000,
  B00000  
};
void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, smiley);
  lcd.createChar(1, heart_h);
  lcd.createChar(2, heart_f);
  lcd.createChar(3, ohm);
  lcd.createChar(4, rect);
  lcd.createChar(5, arrow_u);
  lcd.createChar(6, arrow_d);
  lcd.createChar(7, diamond);
}
void loop() {
  for(int i=0;i<8;i++){
    lcd.setCursor(i*2,0);
    lcd.print(char(i));
    delay(200);
  }
  lcd.setCursor(0, 1);
  lcd.print("I love you");
  for(int i=10;i<16;i++){
    lcd.setCursor(i, 1);
    lcd.print(char(2));
    delay(200);
  }
  delay(2000);
  lcd.clear();
  delay(300);
}
