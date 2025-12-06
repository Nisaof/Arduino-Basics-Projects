// This program blinks multiple LEDs simultaneously using a loop structure.
// LEDs connected to pins 3–7 turn ON for 100 ms and OFF for 1000 ms.

void setup() {
  // put your setup code here, to run once:
  for(int i=3;i<8;i++){
    pinMode(i,OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=3;i<8;i++){
    digitalWrite(i,HIGH);
  }
  delay(100);
  for(int i=3;i<8;i++){
    digitalWrite(i,LOW);
  }
  delay(1000);

}
