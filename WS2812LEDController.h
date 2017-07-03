/*
 * WS2812LEDController.h
 *
 *  Created on: 5 Sep 2015
 *      Author: v
 */

#ifndef WS2812LEDCONTROLLER_H_
#define WS2812LEDCONTROLLER_H_

#include "Defenitions.h"
#include "LEDController.h"
#include "LEDDataInit.h"
#include "fastLED/FastLED.h"
#define NO_OF_WS_LEDS 141
#define WS_DATA_PIN 8


class LEDGroupData;

class WS2812LEDController:public LEDController {
	uint8_t pinNo;
	 CRGB leds[NO_OF_WS_LEDS];
	 CFastLED fastLED;

public:
	WS2812LEDController();
	virtual ~WS2812LEDController();

	 void setAllLEDOn();
	 void setAllLEDOff();
	 void setLEDGroupOn(LEDGroupData*);
	 void setLEDGroupOnColor(LEDGroupData*,uint32_t);
	 void setLEDGroupOff(LEDGroupData*);
	 void setLEDOn(LEDData*);
	 void setLEDOff(LEDData*);
};

#endif /* WS2812LEDCONTROLLER_H_ */
