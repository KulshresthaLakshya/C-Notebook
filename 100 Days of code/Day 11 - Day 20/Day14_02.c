// Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

int main()
{
    int n;
    printf("Please provide the value of n: ");
    scanf("%d", &n);

    int product = 1;
    for (int i = 2; i <= n; i=i+2)
    {
        product = product * i;
    }
    printf("Product of even numbers from 1 to %d is %d\n", n, product);
    return 0;
}