/*
 * ILEDControl.h
 *
 *  Created on: 10 Aug 2015
 *      Author: v
 */

#ifndef ILEDCONTROL_H_
#define ILEDCONTROL_H_
#include "stdint.h"


class LEDGroupData;
class LEDData;
class ILEDControl {
public:
	//ILEDControl();
	//virtual ~ILEDControl();
	virtual void setAllLEDOn() = 0;
	virtual void setAllLEDOff() = 0;
	virtual void setLEDGroupOn(LEDGroupData*) = 0;
	virtual void setLEDGroupOnColor(LEDGroupData*,uint32_t) = 0;

	virtual void setLEDGroupOff(LEDGroupData*) = 0;
	virtual void setLEDOn(LEDData*) = 0;
	virtual void setLEDOff(LEDData*) = 0;
};

#endif /* ILEDCONTROL_H_ */
