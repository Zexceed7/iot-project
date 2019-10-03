void setup() {
  pinMode(5, INPUT);
  pinMode(16, OUTPUT);
}

void loop() {
  if (digitalRead(5)== 1){
    digitalWrite(16,1);
  }else{
    digitalWrite(16,0);
  }

}
