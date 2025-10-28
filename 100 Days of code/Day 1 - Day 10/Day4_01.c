// Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
    {
        int a, b;
        printf("Enter first number : ");
        scanf("%d", &a);
        printf("Enter second number : ");       
        scanf("%d", &b);

        // Swapping without using a third variable
        a = a + b; // Adding both numbers and storing the result in 'a'
        b = a - b; // Subtract new 'b' from 'a' to get original 'a' and store it in 'b'
        a = a - b; // Subtract new 'b' from new 'a' to get original 'b' and store it in 'a'

        printf("After swapping, first number is %d and second number is %d\n", a, b);
        return 0;
    }