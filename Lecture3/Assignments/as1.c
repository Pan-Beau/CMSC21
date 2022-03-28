/**************************** 
**  Franz Peter A. Ferrer  ** 
**  Lecture 3 Assignments  ** 
****************************/

#include <stdio.h>
#include <stdbool.h>

int main() {

    //  VARIABLE DECLARATION
    int age;
    bool teenager; 

    // USER INPUT
    printf("Enter age: ");
    scanf("%d", &age);
    
    // If-else condition: Prints 1 if teenager is true, else 0 if false
    (age >= 13 && age <=19) ? (teenager = true) : (teenager = false) ;

    //  RESULT STATEMENT
    printf("%d years old is a teenager. %s.", age, teenager ? "True" : "False");

    return 0;
}