#include <Arduino.h>
#include<PubSubClient.h>
#include <WiFi.h>

const char* ssid ="CELMIRA78";
const char* password ="celmira 19%19";

const char *mqtt_server = "node02.myqtthub.com";
const int mqtt_port=8883;
const char *mqtt_user = "ceibarra1@gmail.com";
const char *mqtt_pass= "YO2NQqAg-1BBwFmNv";




WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg=0;
char msg[50];
int value = 0;
#define LED 2
void callback (char* topic, byte* payload, unsigned int length ){
Serial.println();
Serial.println("mensaje recibido bajo el topico->");
Serial.print(topic);
Serial.print("\n");

  for(int i = 0; i<length; i++){
    Serial.println((char)payload[i]);
  }
  Serial.println();
}
void setup_wifi(){

Serial.println("/");
Serial.println("conectando a ->");
Serial.print(ssid);
WiFi.begin(ssid,password);
while(WiFi.status()!= WL_CONNECTED){
   delay(500);
Serial.print(".");

}
}
void reconnect(){
   while(!client.connected()){
Serial.println("intentando conexion MQTT");
String clientId ="CarlosIbarraC";
clientId=clientId + String(random(0xffff),HEX);
if(client.connect(clientId.c_str(),mqtt_user,mqtt_pass)){
Serial.println("Conexion a mqtt exitosa !!!") ;
client.publish("salida","primer mensaje");
client.subscribe("entrada");
   }else{
Serial.println("fallo la conexion");
Serial.print(client.state());
Serial.print("Se intentara de nuevo en 5 segundos");
     delay(5000);

   }
  }



Serial.println("");
Serial.println("Conexion Exitosa");

Serial.print("mi ip es ->");
Serial.print( WiFi.localIP());
}

void setup() {
pinMode(LED , OUTPUT);
    Serial.begin(115200);
    setup_wifi();

client.setServer(mqtt_server,mqtt_port);
client.setCallback(callback);

}
// no se ha tocado
void loop() {
if(client.connected()==false){
  reconnect();

}
client.loop();

if(millis()- lastMsg>2000){
lastMsg= millis();
value++;
String mes= "Valor ->" + String(value);
mes.toCharArray(msg,50);
client.publish("salida",msg);
Serial.println("Mensaje enviado->"+ String(value));

}
  
}
