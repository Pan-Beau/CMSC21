/* Returns the average of a set of grades */

#include <stdio.h>

#define n_students 5

int main(void){

    float grades[n_students], sum, average;
    int i;

    printf("Enter scores in one line: ");
    scanf("%f%f%f%f%f", &grades[0], &grades[1], &grades[2], &grades[3], &grades[4]);

    sum = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];

    average = sum / n_students;

    printf("The average is %.2f.\n", average);

    return 0;
    
}