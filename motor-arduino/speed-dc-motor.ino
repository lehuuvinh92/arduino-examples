int motor = 9;//Chân PWM kết nối motor Arduino
int rv = A0;//Chân kết nối biến trở với Arduino
void setup(){
  pinMode(motor, OUTPUT);//Khai báo chân motor sẽ là ngõ ra
}
void loop(){
  int value = analogRead(rv);//Đọc giá trị điện áp từ biến trở
  int motor_speed = map(value,0,1023,0,255);//chuyển thang đo của value từ 0-1023 sang 0-255
  analogWrite(motor, motor_speed);//Gán tốc độ quay của motor dựa vào giá trị biến trở
}