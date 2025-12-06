// This program increases or decreases a number using two buttons.
// The value is printed to the Serial Monitor each time a button is pressed.

int increaseButton = 2;
int decreaseButton = 3; 
int number = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(increaseButton,INPUT_PULLUP);
  pinMode(decreaseButton,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(increaseButton)){
    ++number;
    Serial.println(number);
    delay(200);
  }
  else if(digitalRead(decreaseButton)){
    --number;
    Serial.println(number);
    delay(200);
  }
 

}
