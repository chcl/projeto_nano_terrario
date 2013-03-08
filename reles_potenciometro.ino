int rele_1 = 8; 
int rele_2 = 7
int potPin = 2;    // selecione o pino de entrada ao potenciômetro
int potenciometro = 0;       // variável a guardar o valor proveniente do sensor

void setup() {
  Serial.begin(9600);  { 
  pinMode(rele_1, OUTPUT);  // declara os pinos rele_1 e rele_2 como saída
  pinMode(rele_2, OUTPUT);
 }
}

void loop() {
  Serial.println(analogRead(potPin));
  potenciometro = analogRead(potPin); 
  int relayoperar = map(potenciometro,500,1000,0,50);
  // le o valor do potenciômetro e ligar os reles
   for(int x=0;x<relayoperar;x++){
   digitalWrite(rele_1, HIGH); 
   digitalWrite(rele_2, HIGH); 
    }
   // ler o valor e desligar os reles
   for(int x=0;x>relayoperar;x++){
   digitalWrite(rele_1, LOW); 
   digitalWrite(rele_2, LOW); 
   
  }
}
