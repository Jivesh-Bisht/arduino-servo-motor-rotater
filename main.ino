
// Include the Servo library 
#include <Servo.h>

Servo servo1, servo2;  // create servo object to control a servo
int ButtonPin = 2; // Pin from where the button OUTPUT pin is connected
bool pressed = false;


void setup() {

  pinMode(ButtonPin, INPUT_PULLUP);  // Sets up the "BUTTON PIN" to listen for any input
  servo1.attach(9);  // attaches the servo on pin 9 to the servo object
  servo2.attach(11); // attaches the servo on pin 11 to the servo object
}

// Mainloop
void loop() {
  
  bool currentState = digitalRead(ButtonPin); // this code wil read if everysecond if the button is pressed or not
  
  // If the current state of the button is pressed than turn both of the servos to 180 degree
  if (currentState==pressed){
    servo1.write(180);
    servo2.write(180);
  } else{ // if the current state of the button is not pressed than turn both of the servos to 0 degree
    servo1.write(0);
    servo2.write(0);
  }
}
