// potenciometro no pino 2 aciona barra de leds e um relé 

int relayPin = 8; 
int potPin = 2;    // selecione o pino de entrada ao potenciômetro
int led[] = {12,14,1,2,3,4,5,8,6,13};   // selecione o pino ao LED
int potenciometro;       // variável a guardar o valor proveniente do sensor

void setup() {
 for(int x=0;x<9;x++) { 
  pinMode(relayPin, OUTPUT);  // declarar o pino ledPin como saída
 }
}

void loop() {
  potenciometro = analogRead(potPin); 
  int ledsParaLigar = map(potenciometro,0,750,0,9);
  int acionamento = 500;
  for(int x=0;x<ledsParaLigar;x++){  // ler o valor do potenciômetro
   digitalWrite(led[x], HIGH);  // ligar o ledPin
   delay(1);
  }  // pausar o programa por algum tempo
  for(int x=0;x<ledsParaLigar;x++){ 
    digitalWrite(led[x], LOW);   // desligar o ledPin
    delay(10);                  // pausar o programa por algum tempo
  }
  for(int x=0;x<acionamento;x++){  // ler o valor do potenciômetro
   digitalWrite(relayPin, HIGH); 
    delay(100);
  } // ligar o ledPin
  for(int x=0;x<acionamento;x++){ 
    digitalWrite(relayPin, LOW); 
   delay(100) ;
  }
}
