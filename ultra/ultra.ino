/*
HC-SR04 Ping distance sensor]
VCC  -> 5v 
GND  -> GND
Echo -> pin 12
Trig -> pin 13
Sensor que mede o tempo de ida e volta 
de uma onda sonora gerada pelo o buzzer
araves de um pequeno microfone.
obs:
usando o buzzer do kit seed você consegue mudar
esse programa para fazer um sensor de estacionamento
da forma que quanto mais proximo o buzzer toca mais
rápido ? 
*/

#define trigPin 13  // o #define apenas diz pro programa trocar
#define echoPin 12  // o nome pelo numero,caso queira colocar o
                    // ultrasonico em outro lugar basta mudar

//executa uma vez
void setup() {
  Serial.begin (9600);           // inicia comunicaçao com velocidade 9600 bits/s
  pinMode(trigPin, OUTPUT);      // fala que o pino trigPin vai enviar um valor
  pinMode(echoPin, INPUT);       // fala que o pino echoPin vai receber um valor

}

//executa várias vezes
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

 
  if (distance >= 200 || distance <= 0) {    // verifica se o valor de distance 
    Serial.println("fora de alcance");      // na faixa desejada
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  
  delay(500);
}

