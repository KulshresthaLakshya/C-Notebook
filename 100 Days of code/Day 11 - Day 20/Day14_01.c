// Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main()
{
    int n;
    printf("Please provide the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (2 * i + 1);
    }
}