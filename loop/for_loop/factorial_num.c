#include <stdio.h>
int main()
{
    int i, factor = 1, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factor *= i;
    }
    printf("Factorial of %d is: %d", n, factor);
    return 0;
}