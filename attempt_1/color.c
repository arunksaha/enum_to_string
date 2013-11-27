#include "color.h"
#include <string.h>

static const ColorName colorNames[] = {
    "Red"
    , "Yellow"
    , "Green"
    , "None"
};

ColorName colorName( ColorCode cc ) {
    return cc < ColorNone ? colorNames[ cc ] : colorNames[ ColorNone ];
}

ColorCode colorCode( ColorName cn ) {
    ColorCode cc = ColorNone;
    int i = 0;
    for( i = 0; i != ColorNone; ++i ) {
        if( strcmp( colorNames[ i ], cn ) == 0 ) {
            cc = i;
            break;
        }
    }
    return cc;
}

