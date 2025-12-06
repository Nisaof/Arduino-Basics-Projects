/*  This program turns two LEDs ON when the start button is pressed,
s and turns them OFF when the stop button is pressed.
*/

int button1=8;
int button2=7;
int led1=2;
int led2=3;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  int start = digitalRead(button1);
  int stop = digitalRead(button2);
  Serial.println(button1);
  
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);

  if(start){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    delay(1000);
    if(!stop){
      delay(1000);
    }
    else{
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      delay(1000);
    }
  }

}