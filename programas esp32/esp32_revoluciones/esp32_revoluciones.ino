//#include <Arduino.h>
volatile int contador = 0;   // Variable entera que se almacena en la RAM del Micro
volatile int contador2 = 0;
int tiempo ;
int Sensor1 = 23; 
int Sensor2 = 22;
void setup() {
  Serial.begin(115200);
  pinMode(Sensor1,INPUT);
  attachInterrupt(digitalPinToInterrupt(Sensor1),contar,FALLING);
  attachInterrupt(digitalPinToInterrupt(Sensor2),contar,FALLING);
}                                        
 
void loop() {
delay(999);
tiempo=tiempo+1000;
if(tiempo==60000){
  Serial.print("rpm-> ");
  Serial.println(contador);
  tiempo=0; 
  contador=0;
  contador2=0;
  }
  
}
void contar(){
  
  if(digitalRead(Sensor1)==0){
    contador++;
    Serial.println(contador);  
  
    
    }
   if(digitalRead(Sensor2)==0){
    contador2++;
    Serial.println(contador2);  
  
    
    } 
   
  }
