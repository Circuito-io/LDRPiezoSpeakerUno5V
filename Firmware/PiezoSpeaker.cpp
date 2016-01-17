#include "PiezoSpeaker.h"

PiezoSpeaker::PiezoSpeaker(int pin) : signalPin(pin) {}

void PiezoSpeaker::write(int frequency) 
{
	tone(signalPin,frequency);
}
void PiezoSpeaker::write(int frequency,int duration) 
{
	tone(signalPin,frequency,duration);
}
void PiezoSpeaker::turnOff()
{
	noTone(signalPin);
}

