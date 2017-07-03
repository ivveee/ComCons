// Do not remove the include below
#include "ComConst.h"

//#include "FreeMem.cpp"
//The setup function is called once at startup of the sketch

//StateDispatcher* disp

TestLEDController ctr;
WS2812LEDController ctrWS;

StateDispatcher disp( (ILEDControl*)&ctrWS);


void setup()
{	Serial.begin(9600);	// statePlayGroup;
Serial1.begin(9600);	// statePlayGroup
	delay(1000);
	//disp.statePlayGroup.ledControl->setAllLEDOn();
	//ctr.setAllLEDOn();
	DEBUG_PRINT("(Init start)");
	//StateDispatcher dispO;
	//disp = new StateDispatcher();
	disp.setActiveState(&(disp.stateWaitButton));
	//pinMode(2, INPUT_PULLUP);
	disp.stateWaitButton.init();
	ctrWS.setAllLEDOff();
	//ctrWS.setAllLEDOn()
	//ctrWS.setLEDGroupOn(&groups[5]);
	DEBUG_PRINT("(Init end)");


}

// The loop function is called in an endless loop
void loop()
{
	//DEBUG_PRINT("(Loop start)");

 /*   char *heapend=sbrk(0);
register char * stack_ptr asm ("sp");
struct mallinfo mi=mallinfo();
printf("\nDr: %d\n",mi.uordblks);
printf("psru%d\n",&_end - ramstart);
printf("sru%d\n\n",ramend - stack_ptr);
printf("freem%d\n",stack_ptr - heapend + mi.fordblks);*/

	//Serial.print("(fr) " + freeRam());	// statePlayGroup;
	delay(10);
	disp.act();
	//DEBUG_PRINT("(Loop end)");

//Add your repeated code here
}
