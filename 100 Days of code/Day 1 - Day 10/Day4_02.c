// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    int n;
    printf(" Provide the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}