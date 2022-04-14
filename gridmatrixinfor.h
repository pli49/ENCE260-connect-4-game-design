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

#endif
