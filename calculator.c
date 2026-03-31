#include <stdio.h>

int main (){

    // calculator for simple arithmetic operation.

     int x, y; 
     char opration ; // opration for +,_,*,/ 

     // Read the operator number . 
     scanf("%d %c %d " ,&x, &opration, &y);

     //condition for the calculate inpput value .

     if (opration == '+'){
        printf("%d", x + y);
     }
     else if (opration == '-'){
        printf("%d", x - y);
     }
     else if (opration == '*')
     {
        printf("%d", x * y);
     }
     else if (opration == '/')
     {
        if (y != 0) // handle the value of y is not 0
        {
            printf("%.2f", (float) x / y);// for get decimal number 
        }
        else{
            printf("0");
        }
        
     }
     else{ printf("Invalid Opration");

     }
     
    
     return 0;
}