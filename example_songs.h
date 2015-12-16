//
//  example_songs.h
//  
//
//

#ifndef example_songs_h
#define example_songs_h

//Global functions

typedef struct{int tone[2];} tone_info;

extern tone_info example_twinkle[];
extern int twinkle_length;
extern tone_info example_imperial[];
extern int imperial_length;
extern void setup_songs();
#endif
