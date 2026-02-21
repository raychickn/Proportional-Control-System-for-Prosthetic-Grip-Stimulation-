//This is the code for the first prosthetic grio simulation, works well but lacks the more smooth and refined feel of a hand 

#include <Servo.h>

Servo myservo;
const int potPin = A0; // potentiometer is set as Analog 0
const int servoPin = 5; // servo motors signal wire set to digital pin 5

void setup() {
  myservo.attach(servoPin); // initialising the motor, allowing arduino to send signals
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin); // setting pot value as the signals the potentiometer generates
  int angle = map(potValue, 0, 1023, 0, 180); // converting the potentiometers readings into angles for the servo motor 
  myservo.write(angle); // telling the motor to follow the analog signal of the potentiometer
  Serial.print("Pot: A0"); // shows up on serial monitor - the potentiometers analog signal
  Serial.print(potValue); // 
  Serial.print("| Angle: 5"); // shows up on serial monitor - the servo motors angle 
  Serial.println(angle);
  delay(20);
}
