#ifndef COLOR_H
#define COLOR_H

typedef enum ColorCode {
    ColorRed = 0
    , ColorYellow
    , ColorGreen
    , ColorNone
} ColorCode;

typedef char const * ColorName;

/** Map Number -> Name */
ColorName colorName( ColorCode );

/** Map Name -> Number */
ColorCode colorCode( ColorName );

#endif
