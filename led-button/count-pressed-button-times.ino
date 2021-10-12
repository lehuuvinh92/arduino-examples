int button = 9;
int led = 5;
int preStateButton=LOW;//lưu trạng thái trước của button
int count = 0;//biến lưu số lần nhấn button
void setup() {
  pinMode(button, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int curStateButton = digitalRead(button);//lấy trạng thái hiện tại của button
  if (curStateButton==HIGH && preStateButton==LOW){
    count++;
  }
  preStateButton=curStateButton;
}
