#include <iostream>
#include "is_black_or_white.h"

// figure black - false and figure white - true
bool is_black_or_white(char figure)
{
    if (figure == 'p' || figure == 'r' || figure == 'n' || figure == 'b'
        || figure == 'k' || figure == 'q') {
        return false;
    } else if (
            figure == 'P' || figure == 'R' || figure == 'N' || figure == 'B'
            || figure == 'K' || figure == 'Q') {
        return true;
    }
    if (figure == '_') 
    {
        return printf("\nError: There is no figure here!\n\n");
    }
    return printf("\nError: is_black_or_white.cpp\n");
}
