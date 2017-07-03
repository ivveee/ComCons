/*
 * LEDGroupData.h
 *
 *  Created on: 5 Aug 2015
 *      Author: v
 */

#ifndef LEDGROUPDATA_H_
#define LEDGROUPDATA_H_
#include "LEDData.h"

class LEDData;

class LEDGroupData {
	uint8_t mp3IndexLowerByte;
	uint32_t allTurnOnTime;
	uint32_t allTurnOffTime;
	uint32_t mp3Duration;
	LEDData* LEDsData;
	uint8_t noOfLEDsData;

public:
	LEDGroupData(uint8_t mp3IndexLowerByte,uint16_t allTurnOnTime,
				uint32_t allTurnOffTime,uint32_t mp3Duration,LEDData* LEDsData,uint8_t noOfLEDsData);
	//virtual ~LEDGroupData();

	uint32_t getAllTurnOffTime() const ;

	uint32_t getAllTurnOnTime() const;

	uint32_t getMp3Duration() const;

	uint8_t getMp3IndexLowerByte() const;

	LEDData* getLEDData(uint8_t index) const;

	uint8_t getNoOfLEDsData() const;
};

#endif /* LEDGROUPDATA_H_ */
