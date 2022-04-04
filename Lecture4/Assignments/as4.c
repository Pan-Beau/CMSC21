/**************************** 
**  Franz Peter A. Ferrer  ** 
**  Lecture 4 Assignments  ** 
****************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATION
    int n, i, j;

    // USER INPUT
    printf("Enter n: ");
    scanf("%d", &n);

    // RESULT STATEMENT
    printf("n    2 to the n");
    printf("\n--   ----------\n");

    //RESULT OUTPUT
    /*Initiliaze variable i from 0,
    Loops as long as variable i is not greater than the user input
    Updates the i by incrementing it by 1*/
    for(i = 0, j = 1; i <= n; i++, j*=2) { // i = exponent, j = 2^n
        printf("%d \t", i);
        printf("%d \n", j);
    }

    return 0;
}