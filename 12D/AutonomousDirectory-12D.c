#include "MovementDirectory-12D.c";


void blueLeft(int delayer)
{
	wait1Msec(delayer*1000);
	move(100); // move forward for 2.5 secs
	wait1Msec(2500);
	move(20); // move slower for 1.5 secs
	Outspeed(65); // start the outtake
	wait1Msec(1500);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .25 seconds
	wait1Msec(250);
	move(0); // stop moving
	wait1Msec(250); // wait  quarter of a second
	strafeRight(100); // strafe right for .75 seconds
	wait1Msec(750);
	strafeRight(0); // stop strafing
	wait1Msec(250); // wait for a quarter of a second
	move(40);
	wait1Msec(500); // move forwards for .5 secs
	move(0);
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

	//wait1Msec(delayer*1000);
	//while(nMotorEncoder[Lbackwheel] /= 10000 )
	//{
	//	move(90);
	//}

}

void blueRight(int delayer)
{
	wait1Msec(delayer*1000);
	move(100); // move forward for 2.5 secs
	wait1Msec(2500);
	move(20); // move slower for 1.5 secs
	Outspeed(65); // start the outtake
	wait1Msec(1500);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .25 seconds
	wait1Msec(250);
	move(0); // stop moving
	wait1Msec(250); // wait  quarter of a second
	strafeLeft(100); // strafe left for .75 seconds
	wait1Msec(750);
	strafeLeft(0); // stop strafing
	wait1Msec(250); // wait for a quarter of a second
	move(40);
	wait1Msec(500); // move forwards for .5 secs
	move(0);
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
	move(100); // move forward for 2.5 secs
	wait1Msec(2500);
	move(20); // move slower for 1.5 secs
	Outspeed(65); // start the outtake
	wait1Msec(1500);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .25 seconds
	wait1Msec(250);
	move(0); // stop moving
	wait1Msec(250); // wait  quarter of a second
	strafeRight(100); // strafe right for .75 seconds
	wait1Msec(750);
	strafeRight(0); // stop strafing
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
	move(100); // move forward for 2.5 secs
	wait1Msec(2500);
	move(20); // move slower for 1.5 secs
	Outspeed(65); // start the outtake
	wait1Msec(1500);
	move(0); // stop
	wait1Msec(500); // wait half a second
	move(-100); // move backwards for .25 seconds
	wait1Msec(250);
	move(0); // stop moving
	wait1Msec(250); // wait  quarter of a second
	strafeLeft(100); // strafe right for .75 seconds
	wait1Msec(750);
	strafeLeft(0); // stop strafing
	move(-40);
	wait1Msec(250);
	move(0);
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
