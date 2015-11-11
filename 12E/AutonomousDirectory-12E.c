#include "MovementDirectory-12E.c";


void blueLeft(int delayer)
{
	wait1Msec(delayer*1000);
	move(127); // move forward for 3 secs
	wait1Msec(3000);
	move(40); // move slower for 2 secs
	Outspeed(87); // start the outtake
	wait1Msec(2000);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .5 seconds
	wait1Msec(500);
	move(0); // stop moving
	wait1Msec(500); // wait  half a second
	strafeRight(100); // strafe right for .75 seconds
	wait1Msec(750);
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
}

void blueRight(int delayer)
{
	wait1Msec(delayer*1000);
	move(127); // move forward for 3 secs
	wait1Msec(3000);
	move(40); // move slower for 2 secs
	Outspeed(87); // start the outtake
	wait1Msec(2000);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .5 seconds
	wait1Msec(500);
	move(0); // stop moving
	wait1Msec(500); // wait  half a second
	strafeRight(-100); // strafe right for .75 seconds
	wait1Msec(750);
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
}

void redLeft(int delayer)
{
	wait1Msec(delayer*1000);
	move(127); // move forward for 3 secs
	wait1Msec(3000);
	move(40); // move slower for 2 secs
	Outspeed(87); // start the outtake
	wait1Msec(2000);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .5 seconds
	wait1Msec(500);
	move(0); // stop moving
	wait1Msec(500); // wait  half a second
	strafeRight(100); // strafe right for .75 seconds
	wait1Msec(750);
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
}

void redRight(int delayer)
{
	wait1Msec(delayer*1000);
	move(127); // move forward for 3 secs
	wait1Msec(3000);
	move(40); // move slower for 2 secs
	Outspeed(87); // start the outtake
	wait1Msec(2000);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .5 seconds
	wait1Msec(500);
	move(0); // stop moving
	wait1Msec(500); // wait  half a second
	strafeRight(-100); // strafe right for .75 seconds
	wait1Msec(750);
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
}
