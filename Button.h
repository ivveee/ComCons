/*
 * Button.h
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include "Arduino.h"


class Button {
	uint8_t pinIndex;
public:
	Button(uint8_t pinIndex);
	virtual ~Button();
	bool getState();
	bool init();

	uint8_t getPinIndex() const ;
};

#endif /* BUTTON_H_ */
