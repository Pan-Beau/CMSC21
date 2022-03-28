/**************************** 
**  Franz Peter A. Ferrer  ** 
**  Lecture 3 Assignments  ** 
****************************/

#include <stdio.h>

int main() {

    //  VARIABLE DECLARATION
    int d1, d2;

    // USER INPUT
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);

    // Identify the first digit
    switch(d1) {
        case 1: // First digit = 1
            switch (d2) {
                case 0:  // If second digit = 0
                    printf("Number entered in words: Ten"); break;
                case 1:  // If second digit = 1
                    printf("Number entered in words: Eleven"); break;
                case 2:  // If second digit = 2
                    printf("Number entered in words: Twelve"); break;
                case 3:  // If second digit = 3
                    printf("Number entered in words: Thirteen"); break;
                case 4:  // If second digit = 4
                    printf("Number entered in words: Fourteen"); break;
                case 5:  // If second digit = 5
                    printf("Number entered in words: Fifteen"); break;
                case 6:  // If second digit = 6
                    printf("Number entered in words: Sixteen"); break;
                case 7:  // If second digit = 7
                    printf("Number entered in words: Seventeen"); break;
                case 8:  // If second digit = 8
                    printf("Number entered in words: Eighteen"); break;
                case 9:  // If second digit = 9
                    printf("Number entered in words: Nineteen"); break;
            }
            break;
        case 2: // First digit = 2
            printf("Number entered in words: Twenty"); break;
        case 3: // First digit = 3
            printf("Number entered in words: Thirty"); break;
        case 4: // First digit = 4
            printf("Number entered in words: Forty"); break;
        case 5: // First digit = 5
            printf("Number entered in words: Fifty"); break;
        case 6: // First digit = 6
            printf("Number entered in words: Sixty"); break;
        case 7: // First digit = 7
            printf("Number entered in words: Seventy"); break;
        case 8: // First digit = 8
            printf("Number entered in words: Eighty"); break;
        case 9: // First digit = 9
            printf("Number entered in words: Ninty"); break;
    }
    if (d1 != 1) {  // In order to avoid printing if user-input is from ten to nineteen
        switch (d2) { // Identify the first digit
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;
        }
    }
    return 0;
}