int boton = 16;
int ventilador = 5;
int contador = 0;

void setup() {
  pinMode(ventilador,OUTPUT);
  pinMode(boton, INPUT_PULLUP); 

}

void apagar(){
  digitalWrite(ventilador, 0);
}

void encender(){
  digitalWrite(ventilador, 1);
}

void loop() {
while (digitalRead(boton) == 1)
  
}
