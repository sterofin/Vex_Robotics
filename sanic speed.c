#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

// global variable
bool goingForward ;  // this handles the direction our robot is heading in

//define prototypes here
void DriveControl();
void ArmControl();
void DriveForward
void DriveSpeed(int speed);


void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................

	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
	// User control code here, inside the loop

	while (true)
	{
	  // This is the main execution loop for the user control program. Each time through the loop
	  // your program should update motor + servo values based on feedback from the joysticks.

	  // .....................................................................................
	  // Insert user code here. This is where you use the joystick values to update your motors, etc.
	  // .....................................................................................

	  UserControlCodePlaceholderForTesting(); // Remove this function call once you have "real" code.
	}
}

//DriveControl Function
//This function will define the values for our drive motors

void DriveControl()
{
	motor[DriveLeft] = VexRT[Ch3];
	motor[DriveRight] = VexRT[Ch2];
}

//ArmControl Function
//will define values for our arm motors

void ArmControl()
{
	//if the Button 6 up is pressed, the arm will go up
	if (VEXRt[Btn6U])
		motor[Arm] = 100;
  else if (VexRT[Btn6d]) //if button down is pressed, the arm will go down
	  motor[Arm] = -100;
	else									//no button is pressed, the arm will not move
		motor[Arm] = 0;
}

task autonomous()
{
	//this will run a total of 10 times
	//so it will run only hit a wall a total of 10 times and then stop
	while( count <= 10)
	{

	}
}

//DriveSpeed (sanic speed)
//This function receives an int parameter
//which is the speed the motors will be assigned
void DriveSpeed(int speed)
{
	motor[DriveLeft] = speed;
	motor[DriveRight] = speed;
}
