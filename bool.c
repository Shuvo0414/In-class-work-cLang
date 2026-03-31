#include <stdio.h>
#include <stdbool.h>

int main()
{
    int time = 16;
    bool isMoring = time < 12;
    bool isDay = time < 18;

    if (isMoring)
    {
        printf("Good Morning");
    }
    else if (isDay)
    {
        printf("Good Day.");
    }
    else
    {
        printf("Good Evening.");
    }
}
