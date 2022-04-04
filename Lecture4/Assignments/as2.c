/**************************** 
**  Franz Peter A. Ferrer  ** 
**  Lecture 4 Assignments  ** 
****************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATION
    int i;

    // VARIABLE ASSIGNMENT
    i = 1;
    while (i < 10) { // While Loop
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 1; // Reassigning the variable
    for (;i < 10;) { // For loop
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i= 1; // Reassigning the variable
    do{ // Do-while Loop
        printf("%d ", i);
        i++;
    } while (i < 10);

    return 0;
}
