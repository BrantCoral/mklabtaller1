const int focoLED =8;   // pin al que conectamos el focoLED
const int BOTON = 2; // pin al que conectamos el botón


void setup() {
  pinMode(focoLED, OUTPUT);   // inicializa el focoLED como salida
  pinMode(BOTON, INPUT);  // inicializa el BOTON como entrada
}

void loop() {
  if(digitalRead(BOTON) == LOW){// si el botón está pulsado
    digitalWrite(focoLED, LOW);         // enciende el focoLED
  } else {                           // de lo contrario
    digitalWrite(focoLED, HIGH);
    delay(300);
    digitalWrite(focoLED,LOW);      //se apaga el led
    delay(300);
  }
}
