#include "AutonomousDirectory-12E.c";
const short leftButton = 1;
const short centerButton = 2;
const short rightButton = 4;

int colorCount = 0;
int sideCount = 0;
int delayCount = 0;
int count = 0;
int delayer1 = 0;
int autonCount = 0;
bool lcdTerminate = false;
bool ifRed = false;
bool ifBlue = false;
bool ifLeft = false;
bool ifRight = false;

//Wait for Press--------------------------------------------------
void waitForPress()
{
	while(nLCDButtons == 0){}
	wait1Msec(5);
}
//----------------------------------------------------------------

//Wait for Release------------------------------------------------
void waitForRelease()
{
	while(nLCDButtons != 0){}
	wait1Msec(5);
}

void lcdPreAuton()
{
	//Clear LCD
	clearLCDLine(0);
	clearLCDLine(1);
	//Loop while center button is not pressed
	while(lcdTerminate == false)
	{
		while(nLCDButtons != centerButton)
		{
			switch(colorCount)
			{
				case 0:
					//Display first choice
					displayLCDCenteredString(0, "Red");
					displayLCDCenteredString(1, "<		 Enter		>");
					waitForPress();
					//Increment or decrement "count" based on button press
					if(nLCDButtons == leftButton)
					{
						waitForRelease();
						colorCount = 1;
					}
					else if(nLCDButtons == rightButton)
					{
						waitForRelease();
						colorCount = 1;
					}
					ifRed = true;
					ifBlue = false;
					break;
				case 1:
					//Display first choice
					displayLCDCenteredString(0, "Blue");
					displayLCDCenteredString(1, "<		 Enter		>");
					waitForPress();
					//Increment or decrement "count" based on button press
					if(nLCDButtons == leftButton)
					{
						waitForRelease();
						colorCount = 0;
					}
					else if(nLCDButtons == rightButton)
					{
						waitForRelease();
						colorCount = 0;
					}
					ifBlue = true;
					ifRed = false;
					break;
			}
		}
		wait10Msec(10);
		//next go to side selection
		waitForRelease();
		if(ifBlue == true && ifRed == false)
		{
			while(nLCDButtons != centerButton)
			{
				switch(sideCount)
				{
					case 0:
						displayLCDCenteredString(0, "Left");
						displayLCDCenteredString(1, "<		 Enter		>");
						waitForPress();
						if(nLCDButtons == leftButton)
						{
							waitForRelease();
							sideCount = 1;
						}
						else if(nLCDButtons == rightButton)
						{
							waitForRelease();
							sideCount = 1;
						}
						autonCount = 0;
						break;
					case 1:
						displayLCDCenteredString(0, "Right");
						displayLCDCenteredString(1, "<		 Enter		>");
						waitForPress();
						if(nLCDButtons == leftButton)
						{
							waitForRelease();
							sideCount = 0;
						}
						else if(nLCDButtons == rightButton)
						{
							waitForRelease();
							sideCount = 0;
						}
						autonCount = 1;
						break;
				}
			}
		}
		else if(ifBlue == false && ifRed == true)
		{
			while(nLCDButtons != centerButton)
			{
				switch(sideCount)
				{
					case 0:
						displayLCDCenteredString(0, "Left");
						displayLCDCenteredString(1, "<		 Enter		>");
						waitForPress();
						if(nLCDButtons == leftButton)
						{
							waitForRelease();
							sideCount = 1;
						}
						else if(nLCDButtons == rightButton)
						{
							waitForRelease();
							sideCount = 1;
						}
						autonCount = 2;
						break;
					case 1:
						displayLCDCenteredString(0, "Right");
						displayLCDCenteredString(1, "<		 Enter		>");
						waitForPress();
						if(nLCDButtons == leftButton)
						{
							waitForRelease();
							sideCount = 0;
						}
						else if(nLCDButtons == rightButton)
						{
							waitForRelease();
							sideCount = 0;
						}
						autonCount = 3;
						break;
				}
			}
		}
		wait10Msec(10);
		waitForRelease();
		while(nLCDButtons !=centerButton)
		{
		switch(delayCount){
		case 0:
			//Display first choice
			displayLCDCenteredString(0, "Delay");
			displayLCDCenteredString(1, "< 0 seconds >");
			waitForPress();
			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				delayCount = 3;
			}
			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				delayCount++;
			}
			delayer1 = 0;
			break;
		case 1:
			//Display second choice
			displayLCDCenteredString(0, "Delay");
			displayLCDCenteredString(1, "< 3 seconds >");
			waitForPress();
			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				delayCount--;
			}
			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				delayCount++;
			}
			delayer1 = 3;
			break;
		case 2:
			//Display third choice
			displayLCDCenteredString(0, "Delay");
			displayLCDCenteredString(1, "< 5 seconds >");
			waitForPress();
			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				delayCount--;
			}
			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				delayCount++;
			}
			delayer1 = 5;
			break;
		case 3:
			//Display fourth choice
			displayLCDCenteredString(0, "Delay");
			displayLCDCenteredString(1, "< 7 seconds >");
			waitForPress();
			//Increment or decrement "count" based on button press
			if(nLCDButtons == leftButton)
			{
				waitForRelease();
				delayCount--;
			}
			else if(nLCDButtons == rightButton)
			{
				waitForRelease();
				delayCount = 0;
			}
			delayer1 = 7;
			break;
		default:
			delayCount = 0;
			break;
		}
		lcdTerminate = true;
	}
}
}
//------------- End of User Interface Code ---------------------/

void lcdAuton()
{
	//Declare count variable to keep track of our choice
	int count = 0;
  //------------- Beginning of Robot Movement Code ---------------
	//Clear LCD
	clearLCDLine(0);
	clearLCDLine(1);
	//Switch Case that actually runs the user choice
	switch(autonCount)
	{
	case 0:
		//If count = 0, run the code correspoinding with choice 1
		displayLCDCenteredString(0, "Blue Left");
		displayLCDCenteredString(1, "is running!");
		blueLeft(delayer1);
		break;
	case 1:
		//If count = 1, run the code correspoinding with choice 2
		displayLCDCenteredString(0, "Blue Right");
		displayLCDCenteredString(1, "is running!");
		blueRight(delayer1);
		break;
	case 2:
		//If count = 2, run the code correspoinding with choice 3
		displayLCDCenteredString(0, "Red Left");
		displayLCDCenteredString(1, "is running!");
		redLeft(delayer1);
		break;
	case 3:
		//If count = 3, run the code correspoinding with choice 4
		displayLCDCenteredString(0, "Red Right");
		displayLCDCenteredString(1, "is running!");
		redRight(delayer1);
		break;
	default:
		displayLCDCenteredString(0, "No valid choice");
		displayLCDCenteredString(1, "was made!");
		break;
	}
}
