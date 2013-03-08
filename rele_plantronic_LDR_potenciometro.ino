/*
  o plantronic/pinoanalog A0 envia dados pro processing
  o aguapotpino/potenciometro1 aciona o relay1 
  o bacpotpino/potenciometro2 aciona o relay2

 */
/*
int plantronic = 0;
int LDR = 1
int aguapotPino = 2;
int bacpotPino = 4;
int relay1 = 8;
int relay2 = 9;
int potenciometro1 = 0;
int potenciometro2 = 0;
*/
int analogPin = 5;
int valAnalog;
int temperatura;

void setup() {
  Serial.begin(9600); /* {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
 } 
}*/
}
void loop() 
{
  int arvore = analogRead(A0);//plantronic
  int luz = analogRead(A1);
 
 /* potenciometro1 = analogRead(aguapotPino);//potenciometro1
  int relay1operar = map(potenciometro1, 500,1000,0,50);
   for(int x=0;x<relay1operar;x++){
   digitalWrite(relay1Pino, HIGH);
   } 
   for(int x=0;x>relay1operar;x++){
   digitalWrite(relay1, LOW); 
   }
  
  potenciometro2 = analogRead(bacpotPino);//potenciometro2
  int relay2operar = map(potenciometro2, 500,1000,0,50);
   for(int x=0;x<relay2operar;x++){
   digitalWrite(relay2, HIGH); 
   }
   for(int x=0;x>relay2operar;x++){
   digitalWrite(relay2, LOW); 
  }
 */ 
 /* valAnalog = analogRead(analogPin);
  temperatura= ( 5 * valAnalog * 100) / 1024;
  Serial.print(temperatura) ; 
  Serial.print(" ");   */
  Serial.print(arvore);
  Serial.print(" ");
  Serial.println(luz);
  delay(1000);
  
  
/*  Serial.print(aguapotPino);
  Serial.print(" ");
  Serial.println(bacpotPino); */
 
}


