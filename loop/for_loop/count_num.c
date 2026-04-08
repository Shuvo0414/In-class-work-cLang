#include <stdio.h>
int main()
{
    int i, n, mul = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        mul*=2;
        printf("%d\n", mul);
    }

    return 0;
}