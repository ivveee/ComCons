/*
 * StateDispatcher.cpp
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#include "StateDispatcher.h"
//#include "LedDataInit.h"
StateDispatcher::StateDispatcher(ILEDControl* control) :
	stateWaitButton(buttons,NO_OF_BUTTONS,control),
	statePlayGroup(groups,NO_OF_LED_GROUPS,control)
{

	//NO SERIAL HERE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// TODO Auto-generated constructor stub
	//Serial.print(Button(2).getPinIndex());
	//Button(2).getPinIndex();
	//StateWaitButton stateWaitButtonO = StateWaitButton(buttons,2);
	//stateWaitButton = new StateWaitButton(buttons,2);
	//StatePlayGroup statePlayGroupO = StatePlayGroup(groups,2);
	//statePlayGroup = new StatePlayGroup(groups,2);
	// Serial.print("(DI) ");
	 activeState = &stateWaitButton;
	 //stateWaitButton.init();
}

void StateDispatcher::act(){
	 //stateWaitButton->act(this);
	// activeState = &stateWaitButton;

	 //activeState->init();
	//DEBUG_PRINT("<dispatcher - act>");
	//DEBUG_PRINT(activeState->getID());

	 uint8_t newStateID = activeState->act();
	 if (newStateID != activeState->getID()){
		DEBUG_PRINT("<state change to>");
		DEBUG_PRINT(newStateID);

		 if(newStateID == stateWaitButton.getID())
			 activeState = &stateWaitButton;
		 if(newStateID == statePlayGroup.getID())
			 activeState = &statePlayGroup;
		 activeState->init();
	 }
}


void StateDispatcher::setActiveState(IState* in_activeState){
	 activeState = in_activeState;
}
