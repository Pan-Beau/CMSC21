/*****************************************************
**               Franz Peter A. Ferrer              **
** [Assignment] Lecture 2 - Constants and Operators **
*****************************************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATION
    int d1, d2;

    // USER INPUT
    printf("Please enter a 2-digit number: ");
    /*Adding a width specifier(%1d) to scan
    the 2-digit number into separate digits*/
    scanf("%1d%1d", &d1, &d2);

    //  RESULT STATEMENT
    printf("Reverse: %d%d", d2,d1); //

    return 0;
}
