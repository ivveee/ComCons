/*
 * TestLEDController.h
 *
 *  Created on: 6 Aug 2015
 *      Author: v
 */

#ifndef TESTLEDCONTROLLER_H_
#define TESTLEDCONTROLLER_H_

#include "LEDController.h"
#include "LEDDataInit.h"
#include "Defenitions.h"


#define NO_OF_PIN_LEDS 6

class LEDGroupData;
class LEDData;
#include "stdint.h"
#include "Arduino.h"

class PinLed{
public:
	uint8_t digitalPinNo;
	PinLed(uint8_t in_digitalPinNo){
		digitalPinNo=in_digitalPinNo;
		pinMode(digitalPinNo,OUTPUT);
		digitalWrite(digitalPinNo,LOW);

	}

	void turnOn(){
		digitalWrite(digitalPinNo,HIGH);
	}

	void turnOff(){
		digitalWrite(digitalPinNo,LOW);
	}
};


class TestLEDController: public LEDController {
public:

	TestLEDController();
	virtual ~TestLEDController();

	 void setAllLEDOn();
	 void setAllLEDOff();
	 void setLEDGroupOn(LEDGroupData*);
	 virtual void setLEDGroupOnColor(LEDGroupData*,uint32_t){};
	 void setLEDGroupOff(LEDGroupData*);
	 void setLEDOn(LEDData*);
	 void setLEDOff(LEDData*);
};

#endif /* TESTLEDCONTROLLER_H_ */
