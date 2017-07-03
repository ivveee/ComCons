/*
 * Button.cpp
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#include "Button.h"

Button::Button(uint8_t in_pinIndex) {
	pinIndex = in_pinIndex;
	//pinMode(pinIndex, INPUT_PULLUP);
}

bool Button::init(){
	pinMode(pinIndex, INPUT_PULLUP);

	//Serial.println(pinIndex);
	return 0;
}
uint8_t Button::getPinIndex() const {
	return pinIndex;
}


Button::~Button() {
	// TODO Auto-generated destructor stub
}

bool Button::getState(){
	return (digitalRead(pinIndex) == HIGH)? false:true;
}


