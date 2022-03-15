/*****************************************************
**               Franz Peter A. Ferrer              **
** [Assignment] Lecture 2 - Constants and Operators **
*****************************************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATION
    int d1, d2, d3; //Three variables since it is a 3 digit-number

    // USER INPUT
    printf("Please enter a 3-digit number: ");
    /*Adding a width specifier(%1d) to scan
    the 3-digit number into separate digits*/
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    //  RESULT STATEMENT
    /*Printing the third variable first,
    then the second variable and lastly,
    the first so that'll appear as the
    reverse of the input*/
    printf("Reverse: %d%d%d", d3, d2,d1);

    return 0;
}
