// Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
    {
        int a, b, var3;;
        printf("Enter first number : ");
        scanf("%d", &a);
        printf("Enter second number : ");       
        scanf("%d", &b);

        // Swapping using a third variable
        var3 = a;
        a = b;
        b = var3;

        printf("After swapping, first number is %d and second number is %d\n", a, b);
        return 0;


    }