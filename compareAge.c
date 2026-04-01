#include <stdio.h>

int main ()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Allowed\n");
    }
    else
    {
        printf("not ALlowed");
    }
    
    return 0;
}