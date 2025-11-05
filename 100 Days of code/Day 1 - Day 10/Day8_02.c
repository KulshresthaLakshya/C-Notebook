// Q16: Write a program to input three numbers and find the largest among them using if–else

#include <stdio.h>
int main()
{
    int a, b, c;
    printf(" Please provide 3 integers:" );
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c)
    {
        printf("%d is the largest number", a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the largest number", b);
    }
    else
    {
        printf("%d is the largest number", c);
    }
}