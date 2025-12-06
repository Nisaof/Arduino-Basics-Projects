// This program creates a simple LED bar graph driven by a potentiometer.
// The analog value determines how many LEDs are turned ON.

int value;
float voltage;

void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<7;i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value= analogRead(A5);
  //delay(100);
  voltage= value*(5.0/1023.0);
  //Serial.println(voltage);
  int ledCount = (int)voltage;
  Serial.println(ledCount);

  for(int i=2;i<7;i++){
    digitalWrite(i,LOW);
  }

  for(int i=2;i<ledCount+2;i++){
    digitalWrite(i,HIGH);
  }
  delay(200);
  
}
