/*
 * StateDispatcher.h
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#ifndef STATEDISPATCHER_H_
#define STATEDISPATCHER_H_

//#include "Button.h"

//#include "IState.h"
#include "StateWaitButton.h"
#include "StatePlayGroup.h"
//#include "LEDGroupData.h"
#include "Arduino.h"
#include "LedDataInit.h"
#include "ILEDControl.h"

class IState;
class StateWaitButton;
class StatePlayGroup;



class StateDispatcher {
public:
		IState* activeState;
		 LEDGroupData* activeLEDGroupDataArray;
		 StateWaitButton stateWaitButton;
		 StatePlayGroup statePlayGroup;
	StateDispatcher(ILEDControl* control);
	 void setActiveState(IState* in_activeState);

	 void act();
};

#endif /* STATEDISPATCHER_H_ */
