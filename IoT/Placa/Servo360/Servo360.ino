#include <Servo.h>
Servo mov;
void setup() {
  // put your setup code here, to run once:
mov.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
mov.write(60);
delay(500);
mov.write(90);
delay(1000);
}
