#include <Arduino.h>
#define pinSensor 23
void setup() {
    pinMode(pinSensor,INPUT);
  Serial.begin(115200);
}

void loop() {

    bool Sensor =digitalRead(pinSensor);
    if (!Sensor)
    {
       Serial.println(Sensor);
       delay(1000);
    }else{
         Serial.println(Sensor);
         delay(1000);
    }
    
  
}
