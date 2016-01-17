#include "Global.h"

int avg;
void setup() 
{
	
	Serial.begin(9600);
	
	avg = ldr.readAverage();
  Serial.println(avg);
  Serial.println("start");
}

void loop() 
{	
	int sample = ldr.read();
	if(abs(avg - sample) > 50)
	{
		Serial.println("Light rate changed");
		piezoSpeaker.write(440, 200);
		delay(200);
		piezoSpeaker.write(880, 200);
		delay(200);
		piezoSpeaker.write(440, 200);
	}
	delay(100);
}
