//
//  input_status.h
//  
//
//  Created by Christoffer Alenskog Berg on 05/12/15.
//
//

#ifndef input_status_h
#define input_status_h
extern unsigned int btn_ext;
extern unsigned int btn_int;
extern unsigned int sw;

extern int getintbtns( void );
extern int getextbtns( void );
extern int getsw( void );
extern int update_status( void );
#endif /* input_status_h */
