int button = 16;
int led = 5;

int ledState = 1;
int buttonCurrent;
int buttonPrevius = 0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  buttonCurrent = digitalRead(button);

if (buttonCurrent == 1 && buttonPrevius == 0){
  if (ledState = 1){
    ledState = 0;
    }
    else{
      ledState = 1;
    }
  }
  
 digitalWrite(led, ledState);

 buttonPrevius = buttonCurrent;
}
