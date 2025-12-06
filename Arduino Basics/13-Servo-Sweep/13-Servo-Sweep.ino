// This program continuously sweeps a servo motor back and forth
// by increasing and decreasing the angle.
#include <Servo.h>
Servo servo1;
int angle=0;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(5);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(angle;angle<=300;angle++){
    servo1.write(angle);
    delay(10);
  }
  //servo1.write(angle);
  //delay(100);
  for(angle;angle>=0;angle--){
    servo1.write(angle);
    delay(100);
  }
  
}
