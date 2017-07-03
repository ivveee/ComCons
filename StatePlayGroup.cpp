/*
 * StatePlayGroup.cpp
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */
#include "StatePlayGroup.h"

StatePlayGroup::StatePlayGroup(LEDGroupData* in_groupData,uint8_t in_noOfGroups,ILEDControl* in_ledControl):
ledControl(in_ledControl),
mp3Player((HardwareSerial*)&Serial1,(HardwareSerial*)&Serial),
sequenceIndex (0)
{
	//ledControl = in_ledControl;
	groupData = in_groupData;
	noOfGroups = in_noOfGroups;
	delayInit_StartFile = 0;
	startTime = 0;


}

StatePlayGroup::~StatePlayGroup() {
	// TODO Auto-generated destructor stub
}

uint8_t StatePlayGroup::act(){

	uint32_t now = millis();
	uint32_t deltaTime = now - startTime;
	//DEBUG_PRINT("(current delta)");
	//DEBUG_PRINT(deltaTime);
	if (deltaTime < 0) return STATE_WAIT_BUTTON;
	LEDGroupData* currentLEDGroupData = &groupData[lastPressedButtonIndex];


	if(deltaTime > delayInit_StartFile){
		deltaTime -= delayInit_StartFile;
		LEDData* firstLEDData = currentLEDGroupData->getLEDData(0);
		LEDData* lastLEDData = currentLEDGroupData->getLEDData(currentLEDGroupData->getNoOfLEDsData()-1);

 		if(/*deltaTime > currentLEDGroupData->getAllTurnOnTime() &&*/ deltaTime < currentLEDGroupData->getAllTurnOffTime() && !allOnPassed){
			// turn all on
 			DEBUG_PRINT("<all leds on>");
 			//ledControl
 			ledControl->setLEDGroupOnColor(currentLEDGroupData,0x0F0F0F);
 			//ledControl->setLEDGroupOn(currentLEDGroupData);
			allOnPassed = true;
		}
		else if(deltaTime > currentLEDGroupData->getAllTurnOffTime() && deltaTime < firstLEDData->getTimeToPlay() && !allOffPassed){
			// turn all off
			allOffPassed = true;
 			//ledControl->setAllLEDOff();
 			//ledControl->setLEDGroupOff(currentLEDGroupData);

 			DEBUG_PRINT("<all leds off>");

		}
		else if (deltaTime > currentLEDGroupData->getLEDData(sequenceIndex)->getTimeToPlay() && deltaTime <= lastLEDData->getTimeToPlay()+10){
					// turn currentLEDGroupData->getLEDData(sequenceIndex) on
 			DEBUG_PRINT("< led on>");
 			DEBUG_PRINT(sequenceIndex);
 			DEBUG_PRINT("< time>");
 			DEBUG_PRINT(deltaTime);

 			ledControl->setLEDOn(currentLEDGroupData->getLEDData(sequenceIndex));

			sequenceIndex++;
		}
		else if (deltaTime > currentLEDGroupData->getMp3Duration()){
 			DEBUG_PRINT("(mp3 duration)");
 			DEBUG_PRINT(currentLEDGroupData->getMp3Duration());
 			DEBUG_PRINT("(file done)");
 			DEBUG_PRINT("(adding to active)");
 			DEBUG_PRINT(lastPressedButtonIndex);

 			addOnLEDGroupIndex(lastPressedButtonIndex);
			return  IState::STATE_WAIT_BUTTON;
		}
	}


	//DEBUG_PRINT("(All Turn On Time)");
	//DEBUG_PRINT(groupData[lastPressedButtonIndex].getAllTurnOnTime());
	//DEBUG_PRINT("(Turn on first LED)");
	//DEBUG_PRINT(groupData[lastPressedButtonIndex].getLEDData(1)->getTimeToPlay());

	return  getID();
}

void StatePlayGroup::init(){
	DEBUG_PRINT("(state play group - init)");
	//uint32_t grpixl = startTime & 0x0000FFFF;
	DEBUG_PRINT("(init player)");
	DEBUG_PRINT("(selected i)");
	DEBUG_PRINT(lastPressedButtonIndex);
	mp3Player.setPlayMode(0x00);
	mp3Player.setVolume(0x1F);
	DEBUG_PRINT("(init mp3 player)");

	uint8_t play = mp3Player.setMusicPlay(00,groupData[lastPressedButtonIndex].getMp3IndexLowerByte());
	 sequenceIndex = 0;
	 allOnPassed = false;
	 allOffPassed = false;
	DEBUG_PRINT("(file started no)");
	DEBUG_PRINT(play);
	//DEBUG_PRINT("(ledcontrol all off)");
	//ledControl->setAllLEDOff();

	DEBUG_PRINT("(start time)");
	DEBUG_PRINT(startTime);
	startTime = millis();



}
