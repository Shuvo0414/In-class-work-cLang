#include <stdio.h>
int main ()
{
    int temp ;
    scanf("%d", &temp);
    if (temp < 0)
    {
        printf("ist freezing!\n");
    }
    else if(temp < 20)
    {
        printf("its cool\n");
    }
    else
    {
        printf("Its warm");
    }
    




    return 0;
}