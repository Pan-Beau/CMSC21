/*****************************
**  Franz Peter A. Ferrer   ** 
**  Lecture 13 Assignments  ** 
****************************/

#include <stdio.h>
#include <math.h> // math library for squareroot

// Structure
struct line{
    float *midpoint;
    float slope;
    float distance;
    // Nested Structure
    struct point{
        float x;
        float y;
    }point1, point2;
};


// Function for solving Slope
float solveSlope(struct line linePoint) { 
    float slope = (linePoint.point1.y - linePoint.point2.y)/(linePoint.point1.x - linePoint.point2.x);    
    return slope;
}

// Function for solving midpoint
float *solveMidpoint(struct line linePoint) {
    static float midpoint[2];
    midpoint[0] = (linePoint.point1.x + linePoint.point2.x) / 2;
    midpoint[1] = (linePoint.point1.y + linePoint.point2.y) / 2;
    return midpoint;
}

// Function for solving distance
float solveDistance(struct line linePoint) {
    float x, y;
    x = linePoint.point1.x - linePoint.point2.x;
    y = linePoint.point1.y - linePoint.point2.y;
    float distance = sqrt((x * x) + (y * y));
    return distance;
}

// Function to Print the Slope Intercept Form
void getSlopeInterceptForm(struct line linePoint) {
    float b = linePoint.point2.y - linePoint.point2.x * solveSlope(linePoint);
    printf("\ny = %gx + %g", solveSlope(linePoint), b);
}

// Main Function
int main () {

    //Variable declaration for the points in the structure
    struct line linePoint;

    // USER-INPUT for the two points
    printf("Enter x and y for point1: ");
    scanf("%f %f", &linePoint.point1.x, &linePoint.point1.y);

    printf("Enter x and y for point2: ");
    scanf("%f %f", &linePoint.point2.x, &linePoint.point2.y);

    // Storing the value in the Structure
    linePoint.slope = solveSlope(linePoint);
    linePoint.distance = solveDistance(linePoint);
    linePoint.midpoint = solveMidpoint(linePoint);

    // RESULT STATEMENTS
    printf("Slope: %g", linePoint.slope);
    printf("\nMidpoint: (%g , %g)", *linePoint.midpoint, *(linePoint.midpoint + 1));
    printf("\nDistance between 2 points: %g", linePoint.distance);
    getSlopeInterceptForm(linePoint);

    return 0;
}