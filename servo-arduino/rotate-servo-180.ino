#include <Servo.h>//Khai báo thư viện điều khiển Servo
Servo myservo;//Khai báo đối tượng Servo
int servoPin = 9;//Chân kết nối Servo với Arduino
void setup(){
  myservo.attach(servoPin);//Khai báo chân kết nối Servo với Arduino
}
void loop()
{
  for(int pos = 0; pos < 180; pos += 1){
    myservo.write(pos);//Gán góc quay cho Servo
    delay(15);
  }
  for(int pos = 180; pos>=1; pos-=1){
    myservo.write(pos);//Gán góc quay cho Servo
    delay(15);
  } 
}