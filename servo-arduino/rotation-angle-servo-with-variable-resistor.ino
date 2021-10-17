#include <Servo.h>//Khai báo thư viện điều khiển Servo
Servo myservo;//Khai báo đối tượng Servo
int servoPin = 9;//Chân kết nối Servo với Arduino
int rv = A0;//Chân kết nối biến trở với Arduino
void setup(){
  myservo.attach(servoPin);//Khai báo chân kết nối Servo với Arduino
}
void loop()
{
  int value = analogRead(rv);//Đọc giá trị điện áp từ biến trở
  int pos = map(value,0,1023,0,180);//chuyển thang đo của value từ 0-1023 sang 0-180
  myservo.write(pos);//Gán góc quay cho Servo
}