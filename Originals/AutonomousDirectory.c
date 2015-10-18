#include "MovementDirectory.c";


void blueLeft(int delayer)
{
	wait1Msec(delayer*1000);
}

void blueRight(int delayer)
{
	wait1Msec(delayer*1000);
}

void redLeft(int delayer)
{
	wait1Msec(delayer*1000);
	move(100); // move forward for 3.5 secs
	wait1Msec(3500);
	move(0); // Stop moving
	Outspeed(65); // start the outtake
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .15 seconds
	wait1Msec(150);
	move(0); // stop moving
	wait1Msec(500); // wait  half a second
	strafeRight(100); // strafe right for .8 seconds
	wait1Msec(800);
	strafeRight(0); // stop strafing
	wait1Msec(1000); // wait 1 second
	Inspeed(127); // start the intake
	wait1Msec(500); // begin shhoting cycle
	Inspeed(0);
	wait1Msec(1000);
	Inspeed(127);
	wait1Msec(500);
	Inspeed(0);
	wait1Msec(1000);
	Inspeed(127);
	wait1Msec(500);
	Inspeed(0);
	wait1Msec(1000);
	Inspeed(127);
	wait1Msec(500);
	Inspeed(0);
	Outspeed(0);

	/*
	rotateRight(100); // rotate to the right for half a second
	*/
}

void redRight(int delayer)
{
	wait1Msec(delayer*1000);
}
