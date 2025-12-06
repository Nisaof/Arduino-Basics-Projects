// This program prints text messages to the Serial Monitor
// to demonstrate basic serial communication.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("hello world");
  Serial.println("Arduino");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("good morning");
}
