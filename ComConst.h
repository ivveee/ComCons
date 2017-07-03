// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _ComConst_H_
#define _ComConst_H_


#include "Arduino.h"
#include "Defenitions.h"
//#include "LEDData.h"
//#include "LEDGroupData.h"
#include "TestLEDController.h"
#include "WS2812LEDController.h"

#include "StateDispatcher.h"
class StateDispatcher;
//add your includes for the project ComConst here


//end of add your includes here
#ifdef __cplusplus
extern "C" {
#endif
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

extern char _end;
extern "C" char *sbrk(int i);
char *ramstart=(char *)0x20070000;
char *ramend=(char *)0x20088000;
//StateDispatcher disp0;


void loop();
void setup();
#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project ComConst here




//Do not add code below this line
#endif /* _ComConst_H_ */
