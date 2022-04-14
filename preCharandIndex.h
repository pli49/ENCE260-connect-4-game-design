/** @file   gridmatrixinfor.h
    @author Thomas Wang & Bill Liu
    @date   14 Oct 2019
    @brief  matrix information.
*/

#ifndef GRIDMATRIXINFOR_H
#define GRIDMATRIXINFOR_H

#include <stdint.h>
#include <stdbool.h>


/* Led matrix configuration structure.  */
typedef struct grid_s
{
    uint8_t column;
    uint8_t row;
    bool setted;
    bool received;
    bool navswitched;
} Grid;


/** Get index of the received character.
@param character
@return index*/
uint8_t get_index(char chara);

/** Get the character which will be sent to another player.
    @param index
    @return character
*/

char get_character(uint8_t grid_ii);



#endif
