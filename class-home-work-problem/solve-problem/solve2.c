#include <stdio.h>

int main()
{
    /*
    (2)Write a Cprogram that accepts a grade character (A/B/C/D/F, uppercase orlowercase) from the user. Use a switch statement to print the correspondingevaluation. Print an error message for invalid characters.
    */

    char grade;
    scanf(" %c", &grade); // note the space before %c to skip any whitespace

    switch (grade)
    {
    case 'A':
    case 'a':
        printf("Excellent");
        break;
    case 'B':
    case 'b':
        printf("Good");
        break;
    case 'C':
    case 'c':
        printf("Average");
        break;
    case 'D':
    case 'd':
        printf("Below Average");
        break;
    case 'F':
    case 'f':
        printf("Fail");
        break;
    default:
        printf("invalid grade");
    }

    return 0;
}