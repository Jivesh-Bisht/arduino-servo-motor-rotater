// Add th control pin at 3 or else change the code according the control pin is in the board number


// Include the Servo library 
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0 ; pos <= 90 ; pos += 1 ){
    myservo.write(pos);
    delay(15);
  }
  for (pos = 90 ; pos >= 0 ; pos -= 1 ){
    myservo.write(pos);
    delay(15);
  }
}
