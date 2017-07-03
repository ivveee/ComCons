/*
 * StatePlayGroup.h
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#ifndef STATEPLAYGROUP_H_
#define STATEPLAYGROUP_H_

//#include "IState.h"
#include "LEDGroupData.h"
#include "ILEDControl.h"

#include "IState.h"
#include "Arduino.h"
#include "Defenitions.h"
#include "mp3SerialPlayer.h"


class IState;

class StatePlayGroup : public IState{
	LEDGroupData* groupData;
	uint8_t noOfGroups;
	uint32_t delayInit_StartFile;
	uint32_t startTime;
	mp3SerialPlayer mp3Player;
	uint8_t sequenceIndex ;
	bool allOnPassed;
	bool allOffPassed;



public:
	ILEDControl* ledControl;

	StatePlayGroup(LEDGroupData* groupData,uint8_t noOfGroups, ILEDControl* ledControl);
	virtual ~StatePlayGroup();
	uint8_t act();
	void init();
	uint8_t getID(){return IState::STATE_PLAY_GROUP;}



};

#endif /* STATEPLAYGROUP_H_ */
