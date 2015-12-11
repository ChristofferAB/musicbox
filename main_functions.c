//
//  main_functions.c
//  
//
//  Created by Christoffer Alenskog Berg on 05/12/15.
//
//


#include <pic32mx.h>  /* Declarations of system-specific addresses etc */
#include "musicbox.h"
#include "main_functions.h"

void change_tone(int* button){
    if(sw_status == 1) {
        *button = C5;
    } else if(sw_status == 2) {
        *button = D5;
    } else if(sw_status == 3) {
        *button = E5;
    } else if(sw_status == 4) {
        *button = F5;
    } else if(sw_status == 5) {
        *button = G5;
    } else if(sw_status == 6) {
        *button = A5;
    } else if(sw_status == 7) {
        *button = B5;
    } else if(sw_status == 8) {
        *button = C5;
    } else if(sw_status == 9) {
        *button = D5;
    } else if(sw_status == 10) {
        *button = E5;
    } else if(sw_status == 11) {
        *button = F5;
    } else if(sw_status == 12) {
        *button = G5;
    } else if(sw_status == 13) {
        *button = A5;
    } else if(sw_status == 14) {
        *button = B5;
    } else if(sw_status == 15) {
        *button = C6;
    }
}

int play_tone(int tone_overflow_count) {
    
    if (tone_overflow_count) {
        int signal_counter = signal_counter%2;
        unsigned int overflow = IFS(0);
        overflow &= 0x100;
        if (overflow) {
            overflow_tone_count++;
            IFSCLR(0) = 0x100;
        }
        
        if (overflow_tone_count >= tone_overflow_count) {
            // Alternate between 1 and 0 each time overflow flag is reached
            if (signal_counter%2 == 0) {
                PORTDSET = 0x1;
            } else
                PORTDCLR = 0x1;
            signal_counter++;
            overflow_tone_count = 0;
        }
    }
}
