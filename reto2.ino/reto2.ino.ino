const int pinLED1=10;
const int pinLED2=9;
const int pinLED3=8;

const int pinSwitch1=5;
const int pinSwitch2=6;
const int pinSwitch3=7;

const int pinBoton1=13;
const int pinBoton2=12;
const int pinBoton3=11;



int estado1;


void setup() {
  pinMode(pinLED1,OUTPUT);
  pinMode(pinBoton1,INPUT);
   pinMode(pinLED2,OUTPUT);
  pinMode(pinBoton2,INPUT);
   pinMode(pinLED3,OUTPUT);
  pinMode(pinBoton3,INPUT);
 
}

void loop() {
  if (digitalRead(pinBoton1) == LOW) {
               estado1=digitalRead(pinSwitch1);
             if(estado1== true){
                   digitalWrite(pinLED1,HIGH);
                }
                else{
                  digitalWrite(pinLED1,LOW);
                }
   } 

  else{
    digitalWrite(pinLED1,LOW);
  }

/***********************************/
   if (digitalRead(pinBoton2) == LOW) {
               estado1=digitalRead(pinSwitch2);
             if(estado1== true){
                   digitalWrite(pinLED2,HIGH);
                }
                else{
                  digitalWrite(pinLED2,LOW);
                }
   } 

  else{
    digitalWrite(pinLED2,LOW);
  }

/*********************************************/


   if (digitalRead(pinBoton3) == LOW) {
               estado1=digitalRead(pinSwitch3);
             if(estado1== true){
                   digitalWrite(pinLED3,HIGH);
                }
                else{
                  digitalWrite(pinLED3,LOW);
                }
   } 

  else{
    digitalWrite(pinLED3,LOW);
  }
    /*else if (digitalRead(pinBoton2)==LOW){
                estado1=digitalRead(pinSwitch2);
               if(estado1== true){
                     digitalWrite(pinLED2,HIGH);
                  }
                  else{
                    digitalWrite(pinLED2,LOW);
                  }
    }
   else if (digitalRead(pinBoton3)==LOW){
              estado1=digitalRead(pinSwitch3);
               if(estado1== true){
                     digitalWrite(pinLED3,HIGH);
                  }
                  else{
                    digitalWrite(pinLED3,LOW);
                  }
   }*/
   
   
}
