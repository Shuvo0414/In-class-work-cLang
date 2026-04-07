#include <stdio.h>
int main()
{
    /*
    (3)Write a C program that provides two options: 1.Calculate the area of a circle,2.Calculate the area of a square. Accept the user's choice, use a switchstatement to perform the calculation and print the result. Print an errormessage for invalid choices.
    */

    int choice;
    float radius, side, area;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // circle
        printf("Chose %d\n", choice);
        scanf("%f", &radius);
        area = 3.1416 * radius * radius;
        printf("Area of the circle = %.2f\n", area);
        break;

    case 2: // Square
        printf("Chose %d\n", choice);
        scanf("%f", &side);
        area = side * side;
        printf("Area of the square = %.2f\n", area);
        break;
    default:
        printf("invalid choice");
    }

    return 0;
}