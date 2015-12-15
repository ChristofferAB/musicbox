#include <pic32mx.h>  /* Declarations of system-specific addresses etc */
#include "musicbox.h"
#include "setup.h"
#include "main_functions.h"
#include "status.h"

// Some tone frequencies
int C2 = 0x3A;
int CS2 = 0x3E;
int D2 = 0x42;
int DS2 = 0x45;
int E2 = 0x49;
int F2 = 0x4E;
int FS2 = 0x52;
int G2 = 0x57;
int GS2 = 0x5D;
int A2 = 0x62;
int AS2 = 0x68;
int B2 = 0x6E;
int C3 = 0x75;
int CS3 = 0x7B;
int D3 = 0x83;
int DS3 = 0x8B;
int E3 = 0x93;
int F3 = 0x9C;
int FS3 = 0xA5;
int G3 = 0xAF;
int GS3 = 0xB9;
int A3 = 0xC4;
int AS3 = 0xD0;
int B3 = 0xDC;
int C4 = 0xE9;
int CS4 = 0xF7;
int D4 = 0x106;
int DS4 = 0x115;
int E4 = 0x126;
int F4 = 0x137;
int FS4 = 0x14A;
int G4 = 0x15D;
int GS4 = 0x172;
int A4 = 0x188;
int AS4 = 0x19F;
int B4 = 0x1B8;
int C5 = 0x1D2;
int CS5 = 0x1EE;
int D5 = 0x20B;
int DS5 = 0x22A;
int E5 = 0x24B;
int F5 = 0x26E;
int FS5 =0x293;
int G5 = 0x2BA;
int GS5 = 0x2E4;
int A5 = 0x310;
int AS5 = 0x33F;
int B5 = 0x370;
int C6 = 0x3A4;
int CS6 = 0x3DC;
int D6 = 0x417;
int DS6 = 0x3DC;
int E6 = 0x417;
int F6 = 0x455;
int FS6 = 0x497;
int G6 = 0x4DD;
int GS6 = 0x527;
int A6 = 0x575;
int AS6 = 0x5C8;
int B6 = 0x620;
int C7 = 0x67D;
int tone_frq[61];

int setup(void) {
	tone_frq[0] = C2;
	tone_frq[1] = CS2;
	tone_frq[2] = D2;
	tone_frq[3] = DS2;
	tone_frq[4] = E2;
	tone_frq[5] = F2;
	tone_frq[6] = FS2;
	tone_frq[7] = G2;
	tone_frq[8] = GS2;
	tone_frq[9] = A2;
	tone_frq[10] = AS2;
	tone_frq[11] = B2;
	tone_frq[12] = C3;
	tone_frq[13] = CS3;
	tone_frq[14] = D3;
	tone_frq[15] = DS3;
	tone_frq[16] = E3;
	tone_frq[17] = F3;
	tone_frq[18] = FS3;
	tone_frq[19] = G3;
	tone_frq[20] = GS3;
	tone_frq[21] = A3;
	tone_frq[22] = AS3;
	tone_frq[23] = B3;
	tone_frq[24] = C4;
	tone_frq[25] = CS4;
	tone_frq[26] = D4;
	tone_frq[27] = DS4;
	tone_frq[28] = E4;
	tone_frq[29] = F4;
	tone_frq[30] = FS4;
	tone_frq[31] = G4;
	tone_frq[32] = GS4;
	tone_frq[33] = A4;
	tone_frq[34] = AS4;
	tone_frq[35] = B4;
	tone_frq[36] = C5;
	tone_frq[37] = CS5;
	tone_frq[38] = D5;
	tone_frq[39] = DS5;
	tone_frq[40] = E5;
	tone_frq[41] = F5;
	tone_frq[42] = FS5;
	tone_frq[43] = G5;
	tone_frq[44] = GS5;
	tone_frq[45] = A5;
	tone_frq[46] = AS5;
	tone_frq[47] = B5;
	tone_frq[48] = C6;
	tone_frq[49] = CS6;
	tone_frq[50] = D6;
	tone_frq[51] = DS6;
	tone_frq[52] = E6;
	tone_frq[53] = F6;
	tone_frq[54] = FS6;
	tone_frq[55] = G6;
	tone_frq[56] = GS6;
	tone_frq[57] = A6;
	tone_frq[58] = AS6;
	tone_frq[59] = B6;
	tone_frq[60] = C7;
	tone_frq[61] = 0x0;

	// Initialize internal buttons RF1, RD5-7. Pin 4, 34, 36, 37:
    //BTN1
    TRISFSET = 0x2;
    //BTN2-4
    TRISDSET = 0xe0;

	// Init leds
	TRISE &= ~0xff;
	PORTE &= ~0xff;
    
    // Initialize external buttons, Pin 5, 6, 9:
    //BTN5 at RD1, pin 5
    TRISDSET = 0x2;
    //BTN6 at RD2, pin 6
    TRISDSET = 0x4;
    //BTN7 at RD3, pin 9
    TRISDSET = 0x8;
    
    // Initialize switches RD8-11, Pin 2, 7, 8, 35:
    TRISDSET = 0xf00;
    
    // Initialize speaker as output RD0, Pin 3:
    TRISD &= ~0x1;
    
    // Initialize TMR2 as timer for creating audio through speaker
	// Prescaler is set to 1:1 and period register to max 32-bit value.
    T2CON &= ~0xffff;
    T2CONSET = 0x0000;
    PR2 = 0x51;
}










