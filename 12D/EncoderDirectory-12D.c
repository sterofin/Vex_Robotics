//,#include "12D Code 2015-2016.c" ;


void encoderMove( int po , int di )
{
	while( SensorValue[LeftBackEncoder] > (di*50) )
	{
		motor[Lbackwheel] = po;
		motor[Lfrontwheel] = po;
		motor[Rbackwheel] = po;
		motor[Rfrontwheel] = po;
	}
}
