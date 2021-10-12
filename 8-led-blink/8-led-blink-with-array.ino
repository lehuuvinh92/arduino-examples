int arr_led[8]={2, 3, 4, 5, 6, 7, 8, 9};
void setup() {                
  for(int i=0;i<=9;i++){
    pinMode(arr_led[i], OUTPUT);
  }
}

void loop() {
  for(int i=0;i<8;i++){
    digitalWrite(arr_led[i], HIGH);
  }
  delay(1000);//Chờ 1000 mili giây = 1 giây
  for(int i=0;i<8;i++){
    digitalWrite(arr_led[i], LOW);
  }
  delay(1000);//Chờ 1000 mili giây = 1 giây
}
