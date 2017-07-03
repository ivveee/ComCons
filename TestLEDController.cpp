/*
 * TestLEDController.cpp
 *
 *  Created on: 6 Aug 2015
 *      Author: v
 */

#include "TestLEDController.h"


PinLed pinleds[NO_OF_PIN_LEDS]={
		PinLed(54),
		PinLed(55),
		PinLed(56),
		PinLed(57),
		PinLed(58),
		PinLed(59),

};

TestLEDController::TestLEDController() {
	// TODO Auto-generated constructor stub

}

TestLEDController::~TestLEDController() {
	// TODO Auto-generated destructor stub
}

void TestLEDController::setAllLEDOn(){
	 DEBUG_PRINT("(controller - ALL ON)");

	 for(uint8_t index = 0;index<NO_OF_PIN_LEDS;index++){
		 pinleds[index].turnOn();
	 }
}
void TestLEDController::setAllLEDOff(){
	 DEBUG_PRINT("(controller - ALL OFF)");

	 for(uint8_t index = 0;index<NO_OF_PIN_LEDS;index++){
		 pinleds[index].turnOff();
	 }
}
void TestLEDController::setLEDGroupOn(LEDGroupData* groupData){
	 for(uint8_t index = 0;index<groupData->getNoOfLEDsData();index++){
		 if (groupData->getLEDData(index)->getNumberInParentDriver() < NO_OF_PIN_LEDS)
			 pinleds[groupData->getLEDData(index)->getNumberInParentDriver()].turnOn(); // index of real led is equal to index of led within group
	 }

}
void TestLEDController::setLEDGroupOff(LEDGroupData* groupData){
	 for(uint8_t index = 0;index<groupData->getNoOfLEDsData();index++){
		 if (groupData->getLEDData(index)->getNumberInParentDriver() < NO_OF_PIN_LEDS)
			 pinleds[groupData->getLEDData(index)->getNumberInParentDriver()].turnOff();
	 }
}
void TestLEDController::setLEDOn(LEDData* leddata){
	if (leddata->getNumberInParentDriver()<NO_OF_PIN_LEDS){
		 DEBUG_PRINT("(controller - ON LED)");
		 DEBUG_PRINT(leddata->getNumberInParentDriver());

		pinleds[leddata->getNumberInParentDriver()].turnOn();
	}
}
void TestLEDController::setLEDOff(LEDData* leddata){
	if (leddata->getNumberInParentDriver()<NO_OF_PIN_LEDS)
		pinleds[leddata->getNumberInParentDriver()].turnOff();

}
