#include "BSSI.h"

//Initialization Function
void BSSmartInterface::init()
{
	pinMode(BS0, OUTPUT);
	digitalWrite(BS0, HIGH);
	pinMode(BS1, OUTPUT);
	digitalWrite(BS1, HIGH);
	pinMode(BS2, OUTPUT);
	digitalWrite(BS2, HIGH);
	pinMode(BS3, OUTPUT);
	digitalWrite(BS3, HIGH);
	pinMode(BS4, OUTPUT);
	digitalWrite(BS4, HIGH);
	pinMode(BS5, OUTPUT);
	digitalWrite(BS5, HIGH);
	pinMode(BS6, OUTPUT);
	digitalWrite(BS6, HIGH);
	pinMode(BS7, OUTPUT);
	digitalWrite(BS7, HIGH);
}

void BSSmartInterface::play(int channel)
{
	long startTime = millis();
	
	digitalWrite(channel, LOW);
	
	while(millis() < startTime + 100);
	
	digitalWrite(channel, HIGH);
}