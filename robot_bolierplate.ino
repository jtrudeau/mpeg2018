// example routine, to have robot drive in a square


#include <Servo.h>//Loads commands to create Servo objects which generate PWM signals

Servo leftDrive;  // create servo object to control a servo
Servo rightDrive; //another servo object for the left side

int pos = 0;    // variable to store the servo position

void setup()
{
  leftDrive.attach(10);  // attaches the servo on pin 10 to the servo object
  rightDrive.attach(11);  // attaches the servo on pin 11 to the servo object
}

void loop()
{

//example routine, drives in a square
turnRight();
driveForward();
turnRight();
driveForward();
turnRight();
driveForward();
turnRight();
driveForward();

}


//functions below are examples, you could easily make the robot
//move on curved paths or at varying speeds by changing these numbers
//0 is full forward, 90 is stop and 180 is full reverse. The case may be the
//opposite for your build

//turns right about 90 degrees
void turnRight()
{
  leftDrive.write(0);
  rightDrive.write(180);
  delay(450);
}

//turns left about 90 degrees
void turnLeft()
{
  leftDrive.write(180);
  rightDrive.write(0);
  delay(450);
}

//drives straight for 1 second
void driveForward()
{
  leftDrive.write(180);
  rightDrive.write(180);
  delay(1000);
}

//drives straight backward for 1 second
void driveBackward()
{
  leftDrive.write(0);
  rightDrive.write(0);
  delay(1000);
}

//end code---------------------------------------------
