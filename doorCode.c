#include <stdio.h>
int main ()
{
    int doorCode;
    scanf("%d", &doorCode);
    if (doorCode == 1337)
    {
        printf("Correct code door is open \n");

    }
    else
    {
        printf("Wrong code , door is closed");
    }
    

    return 0;
}