/**************************** 
**  Franz Peter A. Ferrer  ** 
**  Lecture 4 Assignments  ** 
****************************/

#include <stdio.h>

int main(void) {

    //  VARIABLE DECLARATION
    int days, start;

    // USER INPUT for number of days
    do {
        printf("Enter number of days in month: ");
        scanf("%d", &days);
        if(days > 31 || days < 28) {
            printf("Invalid input! Must only be within 28-31.\n");
        }
    } while (days > 31 || days < 28);  //loops if input is not within 28-31
    //USER INPUT for the starting day
    do {
        printf("Enter the starting day of the week"
            "(1=Sun, 7=Sat): ");
        scanf("%d", &start);
        if(start < 1 || start > 7){
            printf("Invalid input! Must only be within 1-7.\n");
        }
    } while (start < 1 || start > 7); //loops if input is not within 1-7

    //RESULT STATEMENT
    printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
    /*Initiliaze variable i from 1 and j from 0,
    Loops as long as variable i is not greater than the user input
    Updates variable i and j by incrementing it by 1*/
    for (int i = 1, j = 0; i <= days; i++, j++) {
        /*If starting day is not Sunday(1)
        prints a space accordingly to the
        chosen starting day*/
        while (start != 1) {
            printf("\t");
            start--;
            j++;
        }
        /*Prints a newline every seventh iteration
        in order to match the 7 days of the calendar*/
        if (j == 7) {
            printf("\n");
            j = 0;
        }
        printf("%d\t", i);
    }

    return 0; 
}