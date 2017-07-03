/*
 * IState.cpp
 *
 *  Created on: 7 Aug 2015
 *      Author: v
 */
#include "IState.h"

uint8_t IState::lastPressedButtonIndex = 0;

uint8_t IState::noOfTurnedOnGroupsIndexes = 0;
uint8_t IState::turnedOnGroupsIndexes[NO_OF_LED_GROUPS];


 void IState::addOnLEDGroupIndex(uint8_t index){
	 for(uint8_t i=0;i<noOfTurnedOnGroupsIndexes;i++){
		 if (turnedOnGroupsIndexes[i] == index)
			 return;
	 }
	 DEBUG_PRINT("(added OnGroupIndex)");
	 DEBUG_PRINT(index);
	 turnedOnGroupsIndexes[noOfTurnedOnGroupsIndexes] = index;
	 noOfTurnedOnGroupsIndexes++;
	 if (noOfTurnedOnGroupsIndexes > NO_OF_LED_GROUPS)
		 DEBUG_PRINT("(OVERFLOW ERROR!)");

}
 void IState::removeOnLEDGroupIndex(uint8_t index){

	 uint8_t indexForDeletition = 0;
	 while(indexForDeletition < noOfTurnedOnGroupsIndexes){
		 if(turnedOnGroupsIndexes[indexForDeletition] == index){
			 for(uint8_t i = indexForDeletition+1;i < noOfTurnedOnGroupsIndexes;i++){
				 turnedOnGroupsIndexes[i-1] = turnedOnGroupsIndexes[i];
			 }
			 noOfTurnedOnGroupsIndexes--;
			 return;
		 }
		 indexForDeletition++;
	 }

}
 uint8_t* IState::getOnLEDGroupIndexes()  {
		 return turnedOnGroupsIndexes;
}

 void IState::clearOnLEDGroupIndexes() {
	 noOfTurnedOnGroupsIndexes = 0;
 }
