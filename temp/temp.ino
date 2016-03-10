/*
Sensor de Temperatura:
Sensor possui um resitor que varia com a 
temperatura ou seja um Thermistor.
Para devolver a temperatura precisarmos efetuar
uma conta de acordo com o manual do fabricante.
Obs: Tente variar a temperatura dele com bafo..
*/
#include <math.h>;
int a;
float temperature;
int B=3975;                  //valor do resistor interno
float resistance;
 
void setup()
{
  Serial.begin(9600);  
}
 
void loop()
{
  a=analogRead(A3);        //Coloque o sensor no pino A3
  //Conta para verificar a resitencia atual e conversão para Graus celsius
  resistance=(float)(1023-a)*10000/a; //get the resistance of the sensor;
  temperature=1/(log(resistance/10000)/B+1/298.15)-273.15;//convert to temperature via datasheet&nbsp;;
  //----------------------------------------------------------------------
  delay(500);
  Serial.print("Temperatura atual: ");
  Serial.println(temperature);
 }
