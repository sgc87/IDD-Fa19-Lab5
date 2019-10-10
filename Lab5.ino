#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
boolean t_on = 0;
const int buttonPin = 1;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(buttonPin, INPUT); 
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH && t_on == 0) {
    myservo.write(180);
    delay(100);
    t_on = 1;
  } else if (buttonState == HIGH && t_on == 1) {
    myservo.write(110);
    delay(100);
    t_on = 0;
  }
  delay(100);
}
