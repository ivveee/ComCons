/*
 * LEDController.h
 *
 *  Created on: 6 Aug 2015
 *      Author: v
 */

#ifndef LEDCONTROLLER_H_
#define LEDCONTROLLER_H_
#include "stdint.h"


class LEDGroupData;
class LEDData;

class LEDController{
public:
	virtual void setAllLEDOn()=0;
	virtual void setAllLEDOff()=0;
	virtual void setLEDGroupOn(LEDGroupData*)=0;
	virtual void setLEDGroupOnColor(LEDGroupData*,uint32_t) = 0;

	virtual void setLEDGroupOff(LEDGroupData*)=0;
	virtual void setLEDOn(LEDData*)=0;
	virtual void setLEDOff(LEDData*)=0;

};


#endif /* LEDCONTROLLER_H_ */
