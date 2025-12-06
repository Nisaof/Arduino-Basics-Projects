// This program controls LED brightness using PWM on pins 3 and 5.
// One LED is dim, the other is set to full brightness.

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3,50);
  analogWrite(5,255);


}
