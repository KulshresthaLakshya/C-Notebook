// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main ()
{
    int n; 
    int output = 0; 
    int temporary;

    printf("Please provide a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid Input");
    }
    else if (n == 0)
    {
        printf("The binary representation of 0 is: 0");
    }
    else
    {
        temporary = n;

        while (temporary > 0)
        {
            output = output * 10 + (temporary % 2);
            temporary = temporary / 2;
        }

        printf("The binary representation of %d is: ", n);

        while (output > 0)
        {
            printf("%d", output % 10);
            output = output / 10;
        }
    }

    return 0;
}
