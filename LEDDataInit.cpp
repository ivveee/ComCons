/*
 * LEDDataInint.cpp
 *
 *  Created on: 6 Aug 2015
 *      Author: v
 */


#include "LEDDataInit.h"

//group no | no in group| time of start
#define NO_OF_DATAS_RED 52
	LEDData datasRed[NO_OF_DATAS_RED]={
			LEDData(CRGB::DarkRed ,50,11000),	// Poezd 46
			LEDData(CRGB::DarkRed ,48,11500),
			LEDData(CRGB::DarkRed ,46,12000),
			LEDData(CRGB::DarkRed ,45,12500),
			LEDData(CRGB::DarkRed ,113,13000),
			LEDData(CRGB::DarkRed ,112,13500),
			LEDData(CRGB::DarkRed ,38,16000),
			LEDData(CRGB::DarkRed ,36,16300),
			LEDData(CRGB::DarkRed ,27,16600),
			LEDData(CRGB::DarkRed ,8,16900),
			LEDData(CRGB::DarkRed ,10,17200), //<----
			LEDData(CRGB::DarkRed ,9,17500), //<----
			LEDData(CRGB::DarkRed ,12,17800),
                        LEDData(CRGB::DarkRed ,13,18100),//<---
                        LEDData(CRGB::DarkRed ,30,20000),
                        LEDData(CRGB::DarkRed ,28,20500),
                        LEDData(CRGB::DarkRed ,7,21000),
                        LEDData(CRGB::DarkRed ,5,21500),
                        LEDData(CRGB::DarkRed ,4,22000),
                        LEDData(CRGB::DarkRed ,2,22500),
                        LEDData(CRGB::DarkRed ,1,23000),
                        LEDData(CRGB::DarkRed ,70,67000),
                        LEDData(CRGB::DarkRed ,69,68000),
                        LEDData(CRGB::DarkRed ,62,69000),
                        LEDData(CRGB::DarkRed ,61,70000),
                        LEDData(CRGB::DarkRed ,31,82000),//32?
                        LEDData(CRGB::DarkRed ,33,83000),
                        LEDData(CRGB::DarkRed ,135,84000),
                        LEDData(CRGB::DarkRed ,134,85000),
                        LEDData(CRGB::DarkRed ,132,86000),
                        LEDData(CRGB::DarkRed ,133,87000),
                        LEDData(CRGB::DarkRed ,71,88000),
                        LEDData(CRGB::DarkRed ,86,89000),
                        LEDData(CRGB::DarkRed ,84,90000),
                        LEDData(CRGB::DarkRed ,83,91000),
                        LEDData(CRGB::DarkRed ,78,92000),
                        LEDData(CRGB::DarkRed ,77,93000),
                        LEDData(CRGB::DarkRed ,74,93500),
                        LEDData(CRGB::DarkRed ,73,94000),
                        LEDData(CRGB::DarkRed ,114,95000),
                        LEDData(CRGB::DarkRed ,115,95500),
                        LEDData(CRGB::DarkRed ,116,96000),
                        LEDData(CRGB::DarkRed ,118,96500),
                        LEDData(CRGB::DarkRed ,122,97000),
                        LEDData(CRGB::DarkRed ,123,97500),
                        LEDData(CRGB::DarkRed ,124,98000),
                        LEDData(CRGB::DarkRed ,125,98500),
                        LEDData(CRGB::DarkRed ,128,99000),
                        LEDData(CRGB::DarkRed ,58,112000),
                        LEDData(CRGB::DarkRed ,52,113000),
                        LEDData(CRGB::DarkRed ,57,114000),
                        LEDData(CRGB::DarkRed ,56,115000),

                      	};

#define NO_OF_DATAS_CYAN 25
	LEDData datasCyan[NO_OF_DATAS_CYAN]={
			LEDData(CRGB::Cyan,76,39000),	// Energo 25
			LEDData(CRGB::Cyan,95,40000),
			LEDData(CRGB::Cyan,96,41000),
			LEDData(CRGB::Cyan,93,42000),
			LEDData(CRGB::Cyan,109,43000),
			LEDData(CRGB::Cyan,43,44000),
			LEDData(CRGB::Cyan,102,65000),
			LEDData(CRGB::Cyan,106,66000),
			LEDData(CRGB::Cyan,105,67000),
                        LEDData(CRGB::Cyan,130,67500),
			LEDData(CRGB::Cyan,107,68000),
			LEDData(CRGB::Cyan,44,69000),
                        LEDData(CRGB::Cyan,85,70000),
                        LEDData(CRGB::Cyan,101,77000),
                        LEDData(CRGB::Cyan,121,77350),
                        LEDData(CRGB::Cyan,99,77700),
                        LEDData(CRGB::Cyan,111,78100),
                        LEDData(CRGB::Cyan,11,78450),
                        LEDData(CRGB::Cyan,14,78800),
                        LEDData(CRGB::Cyan,92,79000),
                        LEDData(CRGB::Cyan,100,79500),
                        LEDData(CRGB::Cyan,131,80000),
                        LEDData(CRGB::Cyan,136,80500),
                        LEDData(CRGB::Cyan,127,85000),
                        LEDData(CRGB::Cyan,117,86000),
	};

#define NO_OF_DATAS_YELLOW 31

	LEDData datasYellow[NO_OF_DATAS_YELLOW]={
			LEDData(CRGB::Yellow,66,22000),	// Gorno  31
			LEDData(CRGB::Yellow,15,25000),
			LEDData(CRGB::Yellow,59,35000),
			LEDData(CRGB::Yellow,53,36000),
			LEDData(CRGB::Yellow,3,37000),
			LEDData(CRGB::Yellow,6,38000),
			LEDData(CRGB::Yellow,29,39000),
			LEDData(CRGB::Yellow,67,40000),
			LEDData(CRGB::Yellow,32,70000),
			LEDData(CRGB::Yellow,34,70300),
			LEDData(CRGB::Yellow,139,70600),
			LEDData(CRGB::Yellow,26,70900),
			LEDData(CRGB::Yellow,90,71200),
                        LEDData(CRGB::Yellow,75,71500),
                        LEDData(CRGB::Yellow,81,71800),
			LEDData(CRGB::Yellow,42,78000),
			LEDData(CRGB::Yellow,39,83000),
			LEDData(CRGB::Yellow,64,88000),
                        LEDData(CRGB::Yellow,60,88500),
                        LEDData(CRGB::Yellow,55,89000),
                        LEDData(CRGB::Yellow,140,89500),
                        LEDData(CRGB::Yellow,47,90000),
                        LEDData(CRGB::Yellow,17,90500),
                        LEDData(CRGB::Yellow,22,97000),
                        LEDData(CRGB::Yellow,21,99000),
                        LEDData(CRGB::Yellow,18,101000),
                        LEDData(CRGB::Yellow,19,102000),
                        LEDData(CRGB::Yellow,20,103000),
                        LEDData(CRGB::Yellow,25,104000),
                        LEDData(CRGB::Yellow,24,105000),
                        LEDData(CRGB::Yellow,23,105500),
                      	};

#define NO_OF_DATAS_GREEN 19

	LEDData datasGreen[NO_OF_DATAS_GREEN] = {
			LEDData(CRGB::DarkGreen ,54,31000),	// Zavod 19
			LEDData(CRGB::DarkGreen ,110,32000),
			LEDData(CRGB::DarkGreen ,108,33000),
			LEDData(CRGB::DarkGreen ,104,34000),
			LEDData(CRGB::DarkGreen ,88,47000),
			LEDData(CRGB::DarkGreen ,94,47500),
			LEDData(CRGB::DarkGreen ,103,48000),
			LEDData(CRGB::DarkGreen ,79,48500),
			LEDData(CRGB::DarkGreen ,82,49000),
			LEDData(CRGB::DarkGreen ,120,49500),
			LEDData(CRGB::DarkGreen ,51,50000),
			LEDData(CRGB::DarkGreen ,40,50500),
			LEDData(CRGB::DarkGreen ,35,51000),
			LEDData(CRGB::DarkGreen ,119,52500),
			LEDData(CRGB::DarkGreen ,80,79000),
			LEDData(CRGB::DarkGreen ,49,80000),
            LEDData(CRGB::DarkGreen ,41,81000),
            LEDData(CRGB::DarkGreen ,98,89500),
            LEDData(CRGB::DarkGreen ,91,90500),
	};

#define NO_OF_DATAS_WHITE 16

	LEDData datasWhite[NO_OF_DATAS_WHITE]={
			LEDData(CRGB::DarkGrey,16,27000),	// Goroda 14
			LEDData(CRGB::DarkGrey,61,53000),
			LEDData(CRGB::DarkGrey,56,54000),
			LEDData(CRGB::DarkGrey,57,55000),
			LEDData(CRGB::DarkGrey,63,56000),
			LEDData(CRGB::DarkGrey,65,57000),
			LEDData(CRGB::DarkGrey,68,58000),
			LEDData(CRGB::DarkGrey,10,63000),
			LEDData(CRGB::DarkGrey,9,64000),
			LEDData(CRGB::DarkGrey,1,65000),
			LEDData(CRGB::DarkGrey,37,66000),
			LEDData(CRGB::DarkGrey,72,80000),
			LEDData(CRGB::DarkGrey,126,81000),
			LEDData(CRGB::DarkGrey,138,82000),
			LEDData(CRGB::DarkGrey,98,88629),
			LEDData(CRGB::DarkGrey,91,89300),

			};
#define NO_OF_DATAS_BLUE 5

	LEDData datasBlue[NO_OF_DATAS_BLUE]={
			LEDData(CRGB::Navy ,87,74000),	// Kanal 5
			LEDData(CRGB::Navy ,89,74500),
			LEDData(CRGB::Navy ,97,82000),
			LEDData(CRGB::Navy ,129,92000),
			LEDData(CRGB::Navy ,137,104000),
			};

	LEDGroupData groups[NO_OF_LED_GROUPS] = {
			LEDGroupData(1,0,100,144000,datasRed,NO_OF_DATAS_RED),
			LEDGroupData(2,0,100,100000,datasCyan,NO_OF_DATAS_CYAN),
			LEDGroupData(3,0,100,108000,datasYellow,NO_OF_DATAS_YELLOW),
			LEDGroupData(4,0,100,124000,datasGreen,NO_OF_DATAS_GREEN),
			LEDGroupData(5,0,100,141000,datasWhite,NO_OF_DATAS_WHITE),
			LEDGroupData(6,0,100,122000,datasBlue,NO_OF_DATAS_BLUE),

	};


	Button buttons[NO_OF_BUTTONS] = {
			Button(4), //datasRed
			Button(5), //datasRed
			Button(3), //datasRed
			Button(6), //datasBlue
			Button(7), // datasYellow
			Button(2), // datasYellow

			//Button(5), //datasMagenta
			//Button(6), //datasGreen
			//Button(7), //datasLightBlue
			//Button(8), //datasLightGreen
			//Button(9), //datasDarkRed
			//Button(10),//datasOrange
			//Button(11),//datasWhite

	};
