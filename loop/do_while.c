#include <stdio.h>
int main ()
{
    int i = 1;
    printf("Enter the multiply number: \n");

    do
    {
        printf("%d\t", i*5 ); // \t is using for the more space, like in keyboard tab: 4 space.
        i++;

    } while (i <= 10);
    
    return 0;
}