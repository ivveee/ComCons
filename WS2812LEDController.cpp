/*
 * WS2812LEDController.cpp
 *
 *  Created on: 5 Sep 2015
 *      Author: v
 */

#include "WS2812LEDController.h"



WS2812LEDController::WS2812LEDController() {
//	pinNo = 6;
	// DEBUG_PRINT("(controller - init)");

	// TODO Auto-generated constructor stub
	fastLED.addLeds<NEOPIXEL,WS_DATA_PIN>(leds, NO_OF_WS_LEDS);


}

WS2812LEDController::~WS2812LEDController() {
	// TODO Auto-generated destructor stub
}

void WS2812LEDController::setAllLEDOn(){
	 DEBUG_PRINT("(controller - ALL ON)");
	 for(uint8_t indexGroup = 0;indexGroup<NO_OF_LED_GROUPS;indexGroup++){
		 for(uint8_t indexLED = 0;indexLED<groups[indexGroup].getNoOfLEDsData();indexLED++){
			 leds[groups[indexGroup].getLEDData(indexLED)->getNumberInParentDriver()] = groups[indexGroup].getLEDData(indexLED)->getColor();
		 }
	 }
	 fastLED.show();


}
void WS2812LEDController::setAllLEDOff(){
	 DEBUG_PRINT("(controller - ALL OFF)");

	 for(uint8_t indexGroup = 0;indexGroup<NO_OF_LED_GROUPS;indexGroup++){
		 for(uint8_t indexLED = 0;indexLED<groups[indexGroup].getNoOfLEDsData();indexLED++){
			 //DEBUG_PRINT("(controller - off led)");
			 //DEBUG_PRINT(indexLED);

			 leds[groups[indexGroup].getLEDData(indexLED)->getNumberInParentDriver()] = CRGB::Black;
		 }
	 }
	 fastLED.show();

}


void WS2812LEDController::setLEDGroupOn(LEDGroupData* groupData){
	 for(uint8_t indexLED = 0;indexLED<groupData->getNoOfLEDsData();indexLED++){
		 leds[groupData->getLEDData(indexLED)->getNumberInParentDriver()] = groupData->getLEDData(indexLED)->getColor();
	 }
	 DEBUG_PRINT("(controller - ON LED GROUP)");
	 DEBUG_PRINT_S(groupData->getLEDData(0)->getColor(),HEX);

	 fastLED.show();

}

void WS2812LEDController::setLEDGroupOnColor(LEDGroupData* groupData,uint32_t color){
	 for(uint8_t indexLED = 0;indexLED<groupData->getNoOfLEDsData();indexLED++){
		 leds[groupData->getLEDData(indexLED)->getNumberInParentDriver()] = CRGB(color);
	 }
	 DEBUG_PRINT("(controller - ON LED GROUP)");
	 DEBUG_PRINT_S(groupData->getLEDData(0)->getColor(),HEX);

	 fastLED.show();


}

void WS2812LEDController::setLEDGroupOff(LEDGroupData* groupData){
	 for(uint8_t indexLED = 0;indexLED<groupData->getNoOfLEDsData();indexLED++){
		 leds[groupData->getLEDData(indexLED)->getNumberInParentDriver()] = CRGB::Black;
	 }
	 fastLED.show();

}
void WS2812LEDController::setLEDOn(LEDData* leddata){
	if (leddata->getNumberInParentDriver() < NO_OF_WS_LEDS){
		 DEBUG_PRINT("(controller - ON LED)");
		 DEBUG_PRINT(leddata->getNumberInParentDriver());

		leds[leddata->getNumberInParentDriver()] = leddata->getColor();
	}
	fastLED.show();

}
void WS2812LEDController::setLEDOff(LEDData* leddata){
	if (leddata->getNumberInParentDriver()<NO_OF_WS_LEDS){
		 DEBUG_PRINT("(controller - OFF LED)");
		 DEBUG_PRINT(leddata->getNumberInParentDriver());

		leds[leddata->getNumberInParentDriver()] = CRGB::Black;
	}
	fastLED.show();


}
