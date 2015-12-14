#include <pic32mx.h>  /* Declarations of system-specific addresses etc */
#include "musicbox.h"
#include "input_status.h"

unsigned int btn_ext;
unsigned int btn_int;
unsigned int sw;

//Update status
int update_status() {
    getintbtns();
    getextbtns();
    getsw();    
}

// Help functions
int getintbtns() {
    
    unsigned int btn1 = PORTF;
    btn1 >>= 1;
    btn1 &= 0x1;
    
    unsigned int btnrest = PORTD;
    btnrest >>= 4;
    btnrest &= 0xe;
    btn_int = btn1 | btnrest;
}

int getextbtns() {
    unsigned int _portd = PORTD;
    unsigned int btn1, btn2, btn3;
    
    btn1 = _portd;
    btn1 >>= 1;
    btn1 &= 0x1;
    btn2 = _portd;
    btn2 >>= 1;
    btn2 &= 0x2;
    btn3 = _portd;
    btn3 >>= 1;
    btn3 &= 0x4;

    btn_ext = btn3 + btn2 + btn1;
}

int getsw() {
    
    unsigned int sw = PORTD;
    sw >>= 8;
    sw = sw & 0xf;
    
}
