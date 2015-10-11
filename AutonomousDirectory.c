#include "MovementDirectory.c";
#include "12D-9-13-15.c";


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
	move(100); // move forward for 4 secs
	wait1Msec(4000);
	move(0); // Stop moving
	wait1Msec(500); // wait half a second
	move(-100);
	wait1Msec(150);
	move(0);
	wait1Msec(500);
	Outspeed(65);
	strafeRight(100);
	wait1Msec(700);
	strafeRight(0);
	wait1Msec(500);
	Inspeed(127);
	wait1Msec(2000);
	Outspeed(0);
	Inspeed(0);

	/*
	rotateRight(100); // rotate to the right for half a second
	*/
}

void redRight(int delayer)
{
	wait1Msec(delayer*1000);
}
