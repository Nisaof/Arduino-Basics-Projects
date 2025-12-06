// This program reads an analog value from a potentiometer and
// converts it into voltage. The result is printed on the Serial Monitor.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value= analogRead(A0);
  Serial.print("Value:");
  Serial.println(value);

  float voltage= value*(5000.0/1023); //Arduino Uno HIGH=5V=5000mV 
  Serial.print("Voltage:");
  Serial.println(voltage);

}
