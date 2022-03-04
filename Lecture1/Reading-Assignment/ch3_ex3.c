/****************************
**  Franz Peter A. Ferrer  **
**CMSC21 Reading Assignment**
****************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATIONS
    int num1, denom1, num2, denom2, result_num, result_denom;

    // USER INPUTS
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    /* LOGIC FOR ADDING FRACTIONS */
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // PRINT STATEMENT
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
    }
