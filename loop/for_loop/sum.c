#include <stdio.h>
int main()
{
    int sum = 0; // variable to store total sum, start from 0
    int i;

    for (i = 1; i <= 5; i += 1)
    {

        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
