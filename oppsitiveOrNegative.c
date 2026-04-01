#include <stdio.h>
int main ()
{

    int myNum; 
    scanf ("%d", &myNum);

    if (myNum > 0)
    {
        printf("The value is possitive\n");
        
    }
    else if (myNum < 0)
    {
        printf("The value is a negative number\n");
    }
    else
    {
        printf("The value is 0");
    }
    
    




    return 0;
}