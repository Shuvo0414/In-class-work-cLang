#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 10)
    {
        printf("X is greather than 10\n");
        if (y > 20)
        {
            printf("Y is also greather then 20");
        }
        else
        {
            printf("Y not greather than 20 ");
        }
    }
    else
    {
        printf("x not grather than 10");
    }

    return 0;
}