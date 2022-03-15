/*****************************************************
**               Franz Peter A. Ferrer              **
** [Assignment] Lecture 2 - Constants and Operators **
*****************************************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATION
    int d1, d2; //Two variables since it is a 2 digit-number

    // USER INPUT
    printf("Please enter a 2-digit number: ");
    /*Adding a width specifier(%1d) to scan
    the 2-digit number into separate digits*/
    scanf("%1d%1d", &d1, &d2);

    //  RESULT STATEMENT
    /*Printing the second variable before
    the first so that'll appear as the
    reverse of the input*/
    printf("Reverse: %d%d", d2,d1);

    return 0;
}
