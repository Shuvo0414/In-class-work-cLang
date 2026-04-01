#include <stdio.h>
int main()
{
    int myAge , votingAge; 
    scanf("%d %d", &myAge , &votingAge);
    if (myAge >= votingAge)
    {
        printf("Old Enough to vote!");
    }
    else
    {
        printf("Not Old enough3 to vote");
    }
    
    return 0;
}