#pragma config(Motor,  port2,           Lbackwheel,    tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port3,           Lfrontwheel,   tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port4,           Louttake,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           Lintake,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Rintake,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           Routtake,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Rfrontwheel,   tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port9,           Rbackwheel,    tmotorVex393_MC29, openLoop, driveLeft)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)
#include "AutonomousDirectory.c";
#include "MovementDirectory.c";
#include "LcdCode.c";

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

bool revdown = false;
bool pressed = false;
int max = 100;
int med = 100;
int min = 100;
int X2 = 0,
Y1 = 0,
X1 = 0,
threshold = 15;
int presscount = 0;



#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
  lcdPreAuton();
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
	lcdAuton();
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
		//Create "deadzone" for Y1/Ch3
		if(abs(vexRT[Ch3]) > threshold)
			Y1 = vexRT[Ch3];
		else
			Y1 = 0;
		//Create "deadzone" for X1/Ch4
		if(abs(vexRT[Ch4]) > threshold)
			X1 = vexRT[Ch4];
		else
			X1 = 0;
		//Create "deadzone" for X2/Ch1
		if(abs(vexRT[Ch1]) > threshold)
			X2 = vexRT[Ch1];
		else
			X2 = 0;

		//Remote Control Commands
		motor[Rfrontwheel] = Y1 - X2 - X1;
		motor[Rbackwheel] =  Y1 - X2 + X1;
		motor[Lfrontwheel] = Y1 + X2 + X1;
		motor[Lbackwheel] =  Y1 + X2 - X1;
		//Launcher Code
		if(vexRT[Btn6DXmtr2] == 1)
		{
			Outspeed(65);
			pressed = true;
		}
		else if(vexRT[Btn8DXmtr2] == 1)
		{
			Outspeed(127);
			pressed = true;
		}
		else
			Outspeed(0);

		//ADVANCED LAUNCHER CODE
		/*else if(vexRT[Btn8D] == 0 && pressed)
		{
			revdown = true;
			pressed = false;
		}
		else
			Outspeed(0);
		if(revdown)
		{
			if(max != 0)
			{
				max--;
				Outspeed(127);
			}
			else if(med != 0)
			{
				med--;
				Outspeed(80);
			}
			else if(min != 0)
			{
				min--;
				Outspeed(20);
			}
			else
			{
				Outspeed(0);
				revdown = false;
				max = 100;
				med = 100;
				min = 100;
			}
		}
		*/
		//Intake Code
		if(vexRT[Btn5UXmtr2] == 1)
		{
			Inspeed(127);
		}
		else if(vexRT[Btn5DXmtr2] == 1)
		{
			Inspeed(-127);
		}
		else
		{
			Inspeed(0);
		}
	}
}
