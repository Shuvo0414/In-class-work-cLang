#include <stdio.h>
int main()
{
    // int i = 1 ;
    // printf("%d %d %d",i,i++,++i);

    // printf("complement = %d\n", ~35);
    // printf("complement = %d\n", ~-12);

    // printf("%c\n", (char) 65);
    // getchar();

    // int x;
    // for (x=97; x<=122; x++)
    // {
    //     printf("%c", (char)x);
    // }

    float a, b, c;
    printf("Enter the three side lenght of the truangle\n");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b > c && a + c > b && b + c > a))
    {
        if (a == b && b == c)
        {
            printf("Equlilateral triangle");
        }
        else if (a == b || b == c || a == c)
        {
            printf("isosceles triangle");
        }
        else
        {
            printf("Scalane triangle");
        }
    }
    else
    {
        printf("The side length do not form a valid triangle");
    }

    return 0;
}