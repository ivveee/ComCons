/*
 * LEDData.cpp
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#include "LEDData.h"

LEDData::LEDData(CRGB::HTMLColorCode in_color,uint8_t in_numberInParentDriver,uint32_t in_timeToPlay) {
	color = in_color;
	numberInParentDriver = in_numberInParentDriver;
	timeToPlay = in_timeToPlay;
}

LEDData::~LEDData() {
	// TODO Auto-generated destructor stub
}

uint8_t LEDData::getNumberInParentDriver() const {
	return numberInParentDriver;
}

CRGB::HTMLColorCode LEDData::getColor() const {
	return color;
}

uint32_t LEDData::getTimeToPlay() const {
	return timeToPlay;
}
