const int in = 4;
const int out = 13;

void setup() {
  pinMode(in,INPUT);
  pinMode(out,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int Ir_value = digitalRead(in);
  if( Ir_value == 1)
  { 
    digitalWrite(out,HIGH);
  }
  else
  {
    digitalWrite(out,LOW);
  }

}
