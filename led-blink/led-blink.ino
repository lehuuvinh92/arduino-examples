int led = 6;//chân kết nối với led
void setup() {                
  pinMode(led, OUTPUT);//khai báo chân led là ngõ ra 
}

void loop() {
  digitalWrite(led, HIGH);//Bật led (HIGH - có nghĩa là mức điện áp 5V)
  delay(1000);//Chờ 1000 mili giây = 1 giây   
  digitalWrite(led, LOW);//Tắt led (LOW - có nghĩa là mức điện áp 0V)
  delay(1000);//Chờ 1000 mili giây = 1 giây
}