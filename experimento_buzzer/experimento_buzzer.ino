int buzzer=4;
int numtones=10;
int tones[ ] = {21, 27, 24, 21, 20, 29, 20, 22, 2415, 40,46, 34};
void setup(){
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);




}

void loop() {
 for (int i = 0; i < numtones; i++)
     {  tone(buzzer, tones[i]);
                     delay(500);
                 }
 noTone(buzzer);
}
