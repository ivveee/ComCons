/*
 * LEDData.h
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#ifndef LEDDATA_H_
#define LEDDATA_H_
#include "stdint.h"

#include "fastLED/FastLED.h"


class LEDData {
	CRGB::HTMLColorCode color;
	uint8_t numberInParentDriver;
	uint32_t timeToPlay;
	
public:
	LEDData(CRGB::HTMLColorCode  ,uint8_t ,uint32_t );
	virtual ~LEDData();

	CRGB::HTMLColorCode getColor() const;
	uint8_t getNumberInParentDriver() const;

	uint32_t getTimeToPlay() const ;

};

#endif /* LEDDATA_H_ */
