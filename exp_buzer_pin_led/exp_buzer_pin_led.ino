int led=5;
int buzzer=4;




void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
tone(buzzer,1500);
Serial.println("encendido");
delay(3000);
digitalWrite(led,LOW);
noTone(buzzer);
Serial.println("apaado");
delay(3000);
}
