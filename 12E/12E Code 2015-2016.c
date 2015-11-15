#pragma config(Motor,  port1,           Lbackwheel,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           Lfrontwheel,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           LIntake,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           Louttake,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           Routtake,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Rintake,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           Rfrontwheel,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          Rbackwheel,    tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)
#include "SmartMotorLib.c";
#include "AutonomousDirectory-12E.c";
#include "MovementDirectory-12E.c";
#include "LcdCode-12E.c";

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

bool revdown = false;
bool pressed = false;
int max = 50;
int med = 50;
int min = 50;
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
  SmartMotorsInit();
  SmartMotorPtcMonitorEnable();
  SmartMotorCurrentMonitorEnable();
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
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................

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
	SmartMotorRun();
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
		if(vexRT[Btn8DXmtr2] == 1)
		{
			Outspeed(60);
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
				max = 50;
				med = 50;
				min = 50;
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
