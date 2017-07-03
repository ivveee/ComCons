/*
 * StateWaitButton.cpp
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#include "StateWaitButton.h"


StateWaitButton::StateWaitButton(Button* in_buttons,uint8_t in_noOfButtons,ILEDControl* in_ledControl):
	ledControl(in_ledControl)
{
	buttonsConnected = in_buttons;
	noOfButtons = in_noOfButtons;
	timeStarted = 0;
	timePassLimit = 20000;
}

StateWaitButton::~StateWaitButton() {
	// TODO Auto-generated destructor stub
}

uint8_t StateWaitButton::act(){

	//DEBUG_PRINT("(wait button)");

	for(uint8_t i = 0;i<noOfButtons;i++){
		if(buttonsConnected[i].getState()){
			DEBUG_PRINT("(Button Pressed:)");
			DEBUG_PRINT(buttonsConnected[i].getPinIndex());
			DEBUG_PRINT("(Button Index:)");
			lastPressedButtonIndex = i;
			DEBUG_PRINT(IState::lastPressedButtonIndex);
			return IState::STATE_PLAY_GROUP;
		}


	}

	if((millis() - timeStarted > timePassLimit) && getNoOfTurnedOnGroupsIndexes()){
		ledControl->setAllLEDOff();
		clearOnLEDGroupIndexes();
	}

	return  getID();

}

void StateWaitButton::init(){
	DEBUG_PRINT("(state wait button - init)");

	for(uint8_t i = 0;i<noOfButtons;i++){
		buttonsConnected[i].init();
	}
	DEBUG_PRINT("(buttons inited)");
	timeStarted = millis();
	/*DEBUG_PRINT("(adding groups)");

	addOnLEDGroupIndex(3);
	addOnLEDGroupIndex(4);
	addOnLEDGroupIndex(1);
	addOnLEDGroupIndex(3);
	DEBUG_PRINT("(plotting groups)");

	for (uint8_t i=0;i<getNoOfTurnedOnGroupsIndexes();i++){
		DEBUG_PRINT(getOnLEDGroupIndexes()[i]);
	}
	removeOnLEDGroupIndex(0);
	removeOnLEDGroupIndex(1);

	addOnLEDGroupIndex(8);
	DEBUG_PRINT("(plotting groups)");
	for (uint8_t i=0;i<getNoOfTurnedOnGroupsIndexes();i++){
		DEBUG_PRINT(getOnLEDGroupIndexes()[i]);
	}*/

}
