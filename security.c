#include <stdio.h>
#include <stdbool.h>

int main ()
{

    bool isLoggedIn;
    bool isAdmin;
    int securityLevel;
    int loggedInInput, adminInput;


    // Get user inputs
    printf("Are you logged in? (1 for Yes, 0 for No): \n");
    scanf("%d", &loggedInInput);
    isLoggedIn = (loggedInInput == 1);
    
    printf("Are you an admin? (1 for Yes, 0 for No): \n");
    scanf("%d", &adminInput);
    isAdmin = (adminInput == 1);
    
    printf("Enter your security level (1-5): \n");
    scanf("%d", &securityLevel);

    if (isLoggedIn && (isAdmin || securityLevel <= 2))
    {
        printf("Access Granted\n");
    }
    else
    {
        printf("Access denid\n");
    }



    return 0;
}