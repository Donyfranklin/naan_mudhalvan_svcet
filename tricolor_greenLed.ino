
const int TRICOLOR_PIN_GREEN=10;

void setup(){
  pinMode(TRICOLOR_PIN_GREEN,OUTPUT);
}

void loop(){

  digitalWrite(TRICOLOR_PIN_GREEN,HIGH);
  delay(1000);
  digitalWrite(TRICOLOR_PIN_GREEN,LOW);
  delay(1000);
}
