#include "color.h"
#include <assert.h>
#include <string.h>

void testNumberToName( void ) {
    assert( strcmp( colorName( ColorRed ), "Red" ) == 0 );
    assert( strcmp( colorName( ColorYellow ), "Yellow" ) == 0 );
    assert( strcmp( colorName( ColorGreen ), "Green" ) == 0 );
    assert( strcmp( colorName( 42 ), "Last" ) == 0 );
}

void testNameToNumber( void ) {
    assert( colorCode( "Red" ) == ColorRed );
    assert( colorCode( "Yellow" ) == ColorYellow );
    assert( colorCode( "Green" ) == ColorGreen );
    assert( colorCode( "Vibyour" ) == ColorLast );
}

int main( void ) {
    testNumberToName();
    testNameToNumber();
    return 0;
}
