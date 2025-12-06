// This program turns multiple LEDs ON when the button is pressed,
// and turns them OFF when the button is not pressed.
int button1 = 7;

void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<6;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(button1,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button1)){
    for(int i=2;i<6;i++){
      digitalWrite(i,HIGH);
    }
  }
  else{
    for(int i=2;i<6;i++){
      digitalWrite(i,LOW);
      
    }
  }

}
