// This program reads brightness from an LDR sensor (A0).
// If the light level is low, the LED turns ON; otherwise, it turns OFF.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  if(analogRead(A0)<300){
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW);
  }

}
