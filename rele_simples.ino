 /*
 cada 2 segundos alternados, 
 um relé funciona conectado ao pino 8 do Arduino 
 */
 int rele_pino = 8;                 // PIN relé
 void setup(){
   pinMode(rele_pino, OUTPUT);      
 } 
 void loop() {
   digitalWrite(rele_pino, HIGH);   // ACESO
   delay(2000);                   
   digitalWrite(rele_pino, LOW);    // APAGADO
   delay(2000);                  
 } 
