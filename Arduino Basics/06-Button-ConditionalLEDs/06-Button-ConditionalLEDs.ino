// This program blinks LEDs one by one if the button is pressed.
// Otherwise, it prints a warning message on the Serial Monitor.

int button=8;
void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<7;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(button,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(button);
  if(x){
      for(int i=2;i<7;i++){
        digitalWrite(i,HIGH);
        delay(1000);
        digitalWrite(i,LOW);
        delay(1000);
  }}
  else{
    Serial.println("Does not work!");
  }
  

}
