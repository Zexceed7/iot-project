void setup() {
pinMode(5, OUTPUT);
pinMode(16, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(16)== 1){
  digitalWrite(5, HIGH);
}else{
  digitalWrite(5, LOW);
}
}
