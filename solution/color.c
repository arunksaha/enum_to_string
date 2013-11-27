#include "color.h"
#include <string.h>

static const ColorName colorNames[] = {
    "First",
#define COLOR_DEF( number, name )   name,
#include "color_defs.h"
#undef COLOR_DEF
    "Last"
};

bool colorValid( ColorCode cc ) {
    return (ColorFirst < cc) && (cc < ColorLast);
}

ColorName colorName( ColorCode cc ) {
    return colorValid( cc ) ? colorNames[ cc ] : colorNames[ ColorLast ];
}

ColorCode colorCode( ColorName cn ) {
    ColorCode cc = ColorLast;
    int i = 0;
    for( i = 0; i != ColorLast; ++i ) {
        if( strcmp( colorNames[ i ], cn ) == 0 ) {
            cc = i;
            break;
        }
    }
    return cc;
}


