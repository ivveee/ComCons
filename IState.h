/*
 * IState.h
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#ifndef ISTATE_H_
#define ISTATE_H_
#include "stdint.h"

#include "LEDGroupData.h"
#include "LEDDataInit.h"
#include "Defenitions.h"

//#include "StateDispatcher.h"

class StateDispatcher;

 class IState{
 protected:
	 static uint8_t turnedOnGroupsIndexes[];
	 static uint8_t noOfTurnedOnGroupsIndexes;
 public:
	 static const uint8_t STATE_WAIT_BUTTON = 0;
	 static const uint8_t STATE_PLAY_GROUP = 1;
	 static uint8_t lastPressedButtonIndex;

	 static void addOnLEDGroupIndex(uint8_t index);
	 static void removeOnLEDGroupIndex(uint8_t index);
	 static uint8_t* getOnLEDGroupIndexes() ;
	 static void clearOnLEDGroupIndexes() ;


	 virtual void init() = 0;
	 virtual uint8_t act() = 0;
	 virtual uint8_t getID() = 0;
	 //void f(StateDispatcher* d){d->stateWaitButton.noOfButtons;}

	static uint8_t getNoOfTurnedOnGroupsIndexes()  {
		return noOfTurnedOnGroupsIndexes;
	}

};

#endif /* ISTATE_H_ */
