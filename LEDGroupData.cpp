/*
 * LEDGroupData.cpp
 *
 *  Created on: 6 Aug 2015
 *      Author: v
 */

#include "LEDGroupData.h"


	LEDGroupData::LEDGroupData(uint8_t in_mp3IndexLowerByte,uint16_t in_allTurnOnTime,
				uint32_t in_allTurnOffTime,uint32_t in_mp3Duration,
				LEDData* in_LEDsData,uint8_t in_noOfLEDsData ){
		mp3IndexLowerByte = in_mp3IndexLowerByte;
		allTurnOnTime = in_allTurnOnTime;
		allTurnOffTime = in_allTurnOffTime;
		mp3Duration = in_mp3Duration;
		LEDsData = in_LEDsData;
	    noOfLEDsData = in_noOfLEDsData;
	}

	uint32_t LEDGroupData::getAllTurnOffTime() const {
		return allTurnOffTime;
	}

	uint32_t LEDGroupData::getAllTurnOnTime() const{
		return allTurnOnTime;
	}


	uint32_t LEDGroupData::getMp3Duration() const{
		return mp3Duration;
	}


	uint8_t LEDGroupData::getMp3IndexLowerByte() const{
		return mp3IndexLowerByte;
	}

	LEDData* LEDGroupData::getLEDData(uint8_t index) const{
		return &LEDsData[index];
	}

	uint8_t LEDGroupData::getNoOfLEDsData() const {
		return noOfLEDsData;
	}

