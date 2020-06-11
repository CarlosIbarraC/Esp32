int ledr=5;
int ledb=3;
int leda=6;
int fornite=12;
int neblina=8;
int deriva=10;
void setup() {
  // put your setup code here, to run once:
pinMode(ledr, OUTPUT);
pinMode(ledb,OUTPUT);
pinMode(leda,OUTPUT);
pinMode(fornite,OUTPUT);
pinMode(neblina,OUTPUT);
pinMode(deriva,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledr,LOW);
digitalWrite(ledb,HIGH);
digitalWrite(leda,LOW);
digitalWrite(fornite,HIGH);
digitalWrite(neblina,HIGH);
digitalWrite(deriva,HIGH);
delay(200);
digitalWrite(ledr,HIGH);
digitalWrite(ledb,LOW);
digitalWrite(leda,HIGH);
digitalWrite(fornite,LOW);
digitalWrite(neblina,LOW);
digitalWrite(deriva,LOW);
delay(600);
digitalWrite(ledr,HIGH);
digitalWrite(ledb,HIGH);
digitalWrite(leda,HIGH);
digitalWrite(fornite,HIGH);
digitalWrite(neblina,HIGH);
digitalWrite(deriva,HIGH);
delay(600);
}
