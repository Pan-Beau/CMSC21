/****************************
**  Franz Peter A. Ferrer  **
**CMSC21 Reading Assignment**
****************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATIONS
    int i;
    float x;

    // VARIABLES
    i = 40;
    x = 839.21f;

    //  PRINT STATEMENTS
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
    }

