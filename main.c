/*
 * File:   main.c
 * Author: josewrpereira
 *
 * Created on 22 January 2021, 09:56
 */

#include "config.h"
#include <xc.h>
#include "delay.h"

void main(void) 
{
    TRISD = 0;
    PORTD = 0;
    while( 1 )
    {
        PORTD = 0xFF;
        delay(500);
        PORTD = 0x00;
        delay(500);
    }
}
