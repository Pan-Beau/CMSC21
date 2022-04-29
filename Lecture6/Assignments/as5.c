/*Check the size of the array*/

#include <stdio.h>

int main(void){

    int number[16];

    printf("Size of char data type: %u\n", sizeof(char));
    printf("Size of int data type: %u\n", sizeof(int));
    printf("Size of float data type: %u\n", sizeof(float));
    printf("Size of double data type: %u\n", sizeof(double));

    size_t n = sizeof(number)/sizeof(number[0]);
    printf("Total elements the array can hold is: %d\n", n);

    return 0;
}