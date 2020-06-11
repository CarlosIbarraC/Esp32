//#include <Arduino.h>
#include <WiFi.h>

const char*  ssid="CELMIRA78";
const char* password = "celmira 19%19";


void setup() {
Serial.begin(115200);
delay(10);

Serial.println("");
Serial.println("");

Serial.print("Conectando a -> ");
Serial.println(ssid);

//me conecto a la red WiFi
WiFi.begin(ssid,password);

while (WiFi.status() != WL_CONNECTED){
Serial.print(".");
delay(250);
}

Serial.println("");
Serial.println("Conexión Exitosa!");

Serial.print("Mi ip es -> ");
Serial.println(WiFi.localIP());

}

void loop() {



}
