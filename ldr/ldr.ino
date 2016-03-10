/*
SENSOR LDR:
Mede a intensidade iluminosa do ambiemte
quanto mais claro  MAIOR o valor devolvido
quanto mais escuro MENOR o valor devolvido
obs:
tente usar a luz do celular nele ou tampe
ele com uma mão e veja o efeito ao vivo

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
 
 Serial.println(analogRead(A1)); //Envia pela Serial numero(entre 0 - 1024) - coloque o ldr no pino A1, veja na placa
                                 //lido na porta anlogica 0
 
 delay(500);  
}
