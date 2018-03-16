#ifndef BSSI
#define BSSI
/*=================================================
* BrightSign Smart Interface Library
* ----------------------------------
* Contains definitions for pin assignments and 
* useful functions for making interfacing with
* the BrightSign GPIO via the Smart Interface 
* board easier.
* For use with Rev. 1 Boards
*
* Code Revision 1
* March 24, 2015
* 
* Created by Chris Monaco
* Copyright Malone Design/Fabrication
*=================================================*/
#include "Arduino.h"

/*------------------------------------------
- Definition of BrightSign GPIO lines with
- corresponding Arduino pins.
------------------------------------------*/
#define BS0 2
#define BS1 3
#define BS2 4
#define BS3 5
#define BS4 6
#define BS5 7
#define BS6 8
#define BS7 9

/*----------------------------------------
- Function Prototypes
-----------------------------------------*/
class BSSmartInterface
{
	public:
		void init();
		void play(int channel);
};

#endif BSSI