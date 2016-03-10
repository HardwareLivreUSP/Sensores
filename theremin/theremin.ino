/*DESAFIO THEREMIN
Aqui usarmos o ultrasom para ler uma distancia
e colocarmos na função tone(), mas antes mapeamos
o valor para uma faixa(acesse o link e veja o funcionamento)
------------------------------------------------------------
Você precisa mudar os valores do map e do soundDelay para
gerar um som mais agradável..mude teste brinque !!
Boa Diversão XD
escola maior: do re mi... em Hz
http://mundoeducacao.bol.uol.com.br/upload/conteudo/images/nota-e-frequencia(1).jpg
*/


#define echoPin 2
#define trigPin 3
#define speakerPin 6 
#define botao 7
unsigned long pulseTime = 0;                    
unsigned long distance = 0;                     
unsigned long soundDelay = 0;                  


void setup() {
  Serial.begin(9600);
  pinMode(speakerPin, OUTPUT);                  
  pinMode(trigPin, OUTPUT);                     
  pinMode(echoPin, INPUT);                      

 } 


void loop() {
  digitalWrite(trigPin, HIGH);                  
  delayMicroseconds(10);                        
  digitalWrite(trigPin, LOW);                   
  pulseTime = pulseIn(echoPin, HIGH);           
  distance = pulseTime/58.2;                     
  soundDelay = pulseTime/2;                     

 
  if (digitalRead(botao) == HIGH && soundDelay <= 1000) {
    soundDelay = map(soundDelay, 0, 1000, 250,880);        // https://www.arduino.cc/en/Reference/Map
    tone(6, soundDelay,2);                                 // https://www.arduino.cc/en/Reference/Tone
    Serial.println(soundDelay);
  }

}
