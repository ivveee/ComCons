/*
 * LedDataInit.h
 *
 *  Created on: 6 Aug 2015
 *      Author: v
 */

#ifndef LEDDATAINIT_H_
#define LEDDATAINIT_H_

#define NO_OF_LED_GROUPS 6
#define NO_OF_BUTTONS 6



#include "Button.h"
#include "LEDGroupData.h"
#include "LEDData.h"


class Button;
class LEDGroupData;

 extern LEDData datasRed[] ;
 extern LEDData datasYellow[];
 extern LEDData datasWhite[];
 extern LEDData datasOrange[];
 extern LEDData datasLightRed[];
 extern LEDData datasLightGreen[];
 extern LEDData datasLightBlue[];
 extern LEDData datasGreen[];
 extern LEDData datasMagenta[];
 extern LEDData datasYellow[];
 extern LEDData datasBlue[];
 extern LEDData datasRed[];

 extern int const noOfLEDGroups;
 extern LEDGroupData groups[];
 extern Button buttons[];



#endif /* LEDDATAINIT_H_ */
