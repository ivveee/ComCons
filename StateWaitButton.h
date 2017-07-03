/*
 * StateWaitButton.h
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#ifndef STATEWAITBUTTON_H_
#define STATEWAITBUTTON_H_
//#include "IState.h"
#include "IState.h"
#include "Button.h"
#include "stdint.h"
#include "Defenitions.h"
#include "ILEDControl.h"


//#include "StateDispatcher.h"
//#include "Arduino.h"

//class IState;
//class StateDispatcher;
class StateWaitButton : public IState{

	Button* buttonsConnected;
	uint8_t noOfButtons;
	uint32_t timeStarted;
	uint32_t timePassLimit;
public:
	ILEDControl* ledControl;
	StateWaitButton(Button* buttons,uint8_t noOfButtons,ILEDControl* in_ledControl);
	virtual ~StateWaitButton();
	uint8_t act();
	void init();
	uint8_t getID(){return IState::STATE_WAIT_BUTTON;}


	uint8_t getNoOfButtons() const {
		return noOfButtons;
	}
};

#endif /* STATEWAITBUTTON_H_ */
