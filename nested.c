#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age;
    bool isCitizen;
    int citizenInput;

    scanf("%d ", &age);
    scanf("%d", &citizenInput);
    isCitizen = (citizenInput == 1);

    if (age > 20)
    {
        printf("Old enough to vote\n");
        if (isCitizen)
        {
            printf("And you are a citizen , so you can vote\n");
        }
        else
        {
            printf("But you must be a citizen to vote\n");
        }
    }
    else
    {
        printf("Not old enough to vote\n");
    }

    return 0;
}