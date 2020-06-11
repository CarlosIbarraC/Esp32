  
#include <NewPing.h> 
#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define MAX_DISTANCE 200 
int led_rojo=3;
int led_azul=4;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(200);
int uS = sonar.ping_median();
Serial.print("Distancia: ");
Serial.print(uS / US_ROUNDTRIP_CM);
Serial.println("cm");
int emma=(uS / US_ROUNDTRIP_CM);
if(emma>30||emma==0){
  Serial.println("mayor a 30");
 digitalWrite(led_rojo,HIGH);
 digitalWrite(led_azul,LOW);
 delay(200);
  }
if(emma<30){
  Serial.println("menor a 30");
 digitalWrite(led_rojo,LOW);
 digitalWrite(led_azul,HIGH);
 delay(200);
  }

}
