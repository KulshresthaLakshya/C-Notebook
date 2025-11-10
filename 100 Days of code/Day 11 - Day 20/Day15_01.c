// Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>

int main()
{
    int num;
    printf("Please provide the number: ");
    scanf("%d", &num);
    int factorial = 1;
    
    if ( num < 0)
    {
        printf("Factorial of negative numbers is not defined.\n");
        return 1;
    }
        else if ( num == 0)
        {
        printf("Factorial of 0 is 1\n");
        return 0;
        }   
        else{
        for ( int i = 1; i <= num; i++)
        {
        factorial = factorial * i;
        }
        printf("Factorial of %d is %d\n", num, factorial);
        }
    return 0;
}