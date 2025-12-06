// This program blinks the built-in LED (pin 13) with a fixed timing.
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
}
