// Project : LED Blinking Using Arduino Uno
// Programe By : KAVIKUMARAN
// Website : Sololearners.com

const int LED_PIN = 13;
void setup(){
  pinMode(LED_PIN , OUTPUT);
}

void loop(){
  
  digitalWrite(LED_PIN,HIGH);
  delay(1000);
  digitalWrite(LED_PIN,LOW);
  delay(1000);
}
