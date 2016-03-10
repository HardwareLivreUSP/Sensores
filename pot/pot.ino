/*
POTENCIOMETRO:
resistor com valor que varia entre 0 o valor máximo
que depende de potenciometro para potenciometro, vire
o pino e veja o valor aumentar ou subir...
obs:
Você consegue mudar esse programa para controlar brilho
de um led ??
DIVIRTA-SE!!!!!
*/


/*Executa apenas uma vez....*/
void setup() {
  
  Serial.begin(9600); //Estabeleço comunicação pela Serial(Pinos 0 e 1) 
                      //com velocidade de 9600bits por segundo
  delay(1000);        //Espera por 1 segundo

}

/*Executa enquanto a palca estiver ligada ou Reset não ativado*/
void loop() {
 
 Serial.println(analogRead(A0)); //Envia pela Serial numero(entre 0 - 1024) - coloque o pot no pino A0
                                 //lido na porta anlogica 0
 
 delay(500);  
}
