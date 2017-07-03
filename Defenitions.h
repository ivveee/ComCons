/*
 * Defenitions.h
 *
 *  Created on: 6 Aug 2015
 *      Author: v
 */

#ifndef DEFENITIONS_H_
#define DEFENITIONS_H_

#define DEBUG 1

#ifdef DEBUG
 #define DEBUG_PRINT(x)  Serial.println (x)
 #define DEBUG_PRINT_S(x,y)  Serial.println (x,y)
#else
 #define DEBUG_PRINT(x)
 #define DEBUG_PRINT_S(x,y)
#endif



#endif /* DEFENITIONS_H_ */
