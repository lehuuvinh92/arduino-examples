#include <LiquidCrystal.h>//Khai báo thư viện
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//Khai báo các chân RS, E, D4-D7 kết nối với Arduino
void setup() {
  lcd.begin(16, 2);//Khởi tạo màn hình LCD và xác định kích thước màn hình LCD là 16x2
}
void loop() {
  lcd.clear();//Xóa màn hình và đặt con trỏ về vị trí đầu tiên (0, 0)
  lcd.setCursor(6,0);//Di chuyển con trỏ đến cột tương ứng
  lcd.print("HELLO");//Xuất ra màn hình từ vị trí con trỏ
  lcd.setCursor(5,1);
  lcd.print("ARDUINO");
  delay(1000);
}
