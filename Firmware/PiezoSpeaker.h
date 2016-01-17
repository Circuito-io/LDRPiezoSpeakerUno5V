#ifndef PiezoSpeaker_H
#define PiezoSpeaker_H

#include "arduino.h"

class PiezoSpeaker
{
	public:
		PiezoSpeaker(int pin);
		void write(int tone); 
		void write(int tone,int duration); 
		void turnOff();
		
	private:
		const int signalPin;
};
#endif //PiezoSpeaker_H
