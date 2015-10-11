#include "12D-9-13-15.c";
#include "AutonomousDirectory.c";



void strafeLeft(int speed)
{
	motor[Lbackwheel] = speed;
	motor[Lfrontwheel] = -speed;
	motor[Rbackwheel] = -speed;
	motor[Rfrontwheel] = speed;
}

void strafeRight(int speed)
{
	motor[Lbackwheel] = -speed;
	motor[Lfrontwheel] = speed;
	motor[Rbackwheel] = speed;
	motor[Rfrontwheel] = -speed;
}

void rotateLeft(int speed)
{
	motor[Lbackwheel] = -speed;
	motor[Lfrontwheel] = -speed;
	motor[Rbackwheel] = speed;
	motor[Rfrontwheel] = speed;
}

void rotateRight(int speed)
{
	motor[Lbackwheel] = speed;
	motor[Lfrontwheel] = speed;
	motor[Rbackwheel] = -speed;
	motor[Rfrontwheel] = -speed;
}

void rotateLeft1(int speed)
{
	motor[Lbackwheel] = 0;
	motor[Lfrontwheel] = 0;
	motor[Rbackwheel] = speed;
	motor[Rfrontwheel] = speed;
}

void rotateRight1(int speed)
{
	motor[Lbackwheel] = speed;
	motor[Lfrontwheel] = speed;
	motor[Rbackwheel] = 0;
	motor[Rfrontwheel] = 0;
}

void move(int speed)
{
	motor[Lbackwheel] = speed;
	motor[Lfrontwheel] = speed;
	motor[Rbackwheel] = speed;
	motor[Rfrontwheel] = speed;
}

void Outspeed(int speed)
{
	motor[Routtake] = speed;
	motor[Louttake] = speed;
}

void Inspeed(int speed)
{
	motor[Rintake] = speed;
	motor[Lintake] = speed;
}
