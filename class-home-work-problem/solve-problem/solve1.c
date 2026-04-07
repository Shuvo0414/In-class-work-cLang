#include <stdio.h>

int main()
{

    /*
    .(1)Write a Cprogram that accepts an integer between 1 and 7 from the user.Use a switch statement to print the corresponding weekday (1=Monday,7=Sunday). If the input is out of range, print an invalid input message.
    */

    int weekday;           // variable to store user input.
    scanf("%d", &weekday); // take integer input from user.

    // switch statement to print the corresponding weekday based on user input.
    switch (weekday)
    {
    case 1:
        printf("1=Monday");
        break;
    case 2:
        printf("2=Tuesday");
        break;
    case 3:
        printf("3=Wednesday");
        break;
    case 4:
        printf("4=Thursday");
        break;
    case 5:
        printf("5=Friday");
        break;
    case 6:
        printf("6=Saturday");
        break;
    case 7:
        printf("7=Sunday");
        break;

    default:
        printf("invalid input");
    }

    return 0;
}