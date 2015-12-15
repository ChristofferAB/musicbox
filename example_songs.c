//
//  
//  
//


#include <pic32mx.h>  /* Declarations of system-specific addresses etc */
#include "musicbox.h"
#include "setup.h"
#include "example_songs.h"

int example_twinkle[70];
int example_zelda[38];

void setup_songs() {
	
	example_twinkle[0] = G4;
	example_twinkle[1] = 4;
	example_twinkle[2] = G4;
	example_twinkle[3] = 4;
	example_twinkle[4] = D5;
	example_twinkle[5] = 4;
	example_twinkle[6] = D5;
	example_twinkle[7] = 4;
	example_twinkle[8] = E5;
	example_twinkle[9] = 4;
	example_twinkle[10] = E5;
	example_twinkle[11] = 4;
	example_twinkle[12] = D5;
	example_twinkle[13] = 2;
	example_twinkle[14] = C5;
	example_twinkle[15] = 4;
	example_twinkle[16] = C5;
	example_twinkle[17] = 4;
	example_twinkle[18] = B5;
	example_twinkle[19] = 4;
	example_twinkle[20] = B5;
	example_twinkle[21] = 4;
	example_twinkle[22] = A5;
	example_twinkle[23] = 4;
	example_twinkle[24] = A5;
	example_twinkle[25] = 4;
	example_twinkle[26] = G4;
	example_twinkle[27] = 2;
	example_twinkle[28] = C5;
	example_twinkle[29] = 4;
	example_twinkle[30] = C5;
	example_twinkle[31] = 4;
	example_twinkle[32] = B5;
	example_twinkle[33] = 4;
	example_twinkle[34] = B5;
	example_twinkle[35] = 4;
	example_twinkle[36] = A5;
	example_twinkle[37] = 4;
	example_twinkle[38] = A5;
	example_twinkle[39] = 4;
	example_twinkle[40] = G4;
	example_twinkle[41] = 2;
	example_twinkle[42] = G4;
	example_twinkle[43] = 4;
	example_twinkle[44] = G4;
	example_twinkle[45] = 4;
	example_twinkle[46] = D5;
	example_twinkle[47] = 4;
	example_twinkle[48] = D5;
	example_twinkle[49] = 4;
	example_twinkle[50] = E5;
	example_twinkle[51] = 4;
	example_twinkle[52] = E5;
	example_twinkle[53] = 4;
	example_twinkle[54] = D5;
	example_twinkle[55] = 2;
	example_twinkle[56] = C5;
	example_twinkle[57] = 4;
	example_twinkle[58] = C5;
	example_twinkle[59] = 4;
	example_twinkle[60] = B5;
	example_twinkle[61] = 4;
	example_twinkle[62] = B5;
	example_twinkle[63] = 4;
	example_twinkle[64] = A5;
	example_twinkle[65] = 4;
	example_twinkle[66] = A5;
	example_twinkle[67] = 4;
	example_twinkle[68] = G4;
	example_twinkle[69] = 2;

	example_zelda[0] = D4;
	example_zelda[1] = 4;
	example_zelda[0] = D5;
	example_zelda[1] = 4;
	example_zelda[0] = B5;
	example_zelda[1] = 2;
	example_zelda[0] = A5;
	example_zelda[1] = 4;
	example_zelda[0] = B5;
	example_zelda[1] = 4;
	example_zelda[0] = A5;
	example_zelda[1] = 2;
	example_zelda[0] = D4;
	example_zelda[1] = 4;
	example_zelda[0] = D5;
	example_zelda[1] = 4;
	example_zelda[0] = B5;
	example_zelda[1] = 2;
	example_zelda[0] = A5;
	example_zelda[1] = 4;
	example_zelda[0] = B5;
	example_zelda[1] = 4;
	example_zelda[0] = A5;
	example_zelda[1] = 2;
	example_zelda[0] = E4;
	example_zelda[1] = 4;
	example_zelda[0] = A5;
	example_zelda[1] = 4;
	example_zelda[0] = G4;
	example_zelda[1] = 2;
	example_zelda[0] = A5;
	example_zelda[1] = 4;
	example_zelda[0] = G4;
	example_zelda[1] = 4;
	example_zelda[0] = A5;
	example_zelda[1] = 2;
	example_zelda[0] = G4;
	example_zelda[1] = 4;	
	/*
	example_twinkle[] = {G4, 4, G4, 4, D5, 4, D5, 4, E5, 4, E5, 4, D5, 2, C5, 4, C5, 4, B5, 4, B5, 4, A5, 4, A5, 4, G4, 2, C5, 4, C5, 4, B5, 4, B5, 4, A5, 4, A5, 4, G4, 2, G4, 4, G4, 4, D5, 4, D5, 4, E5, 4, E5, 4, D5, 2, C5, 4, C5, 4, B5, 4, B5, 4, A5, 4, A5, 4, G4, 2};
	example_zelda[] = {D4, 4, D5, 4, B5, 2, A5, 4, B5, 4, A5, 2, D4, 4, D5, 4, B5, 2, A5, 4, B5, 4, A5, 2, E4, 4, A5, 4, G4, 2, A5, 4, G4, 4, A5, 2, G4, 4};
	*/
}
