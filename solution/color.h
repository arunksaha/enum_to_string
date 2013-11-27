#ifndef COLOR_H
#define COLOR_H
#include <stdbool.h>

typedef enum ColorCode {
    ColorFirst = 0,
#define COLOR_DEF( number, name )   number,
#include "color_defs.h"
#undef COLOR_DEF
    ColorLast
} ColorCode;

typedef char const * ColorName;

/** Return true if it is a valid color defined in color_defs */
bool colorValid( ColorCode );

/** Map Number -> Name */
ColorName colorName( ColorCode );

/** Map Name -> Number */
ColorCode colorCode( ColorName );

#endif
