// Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int j = 1; j <= n; j++)
    {
        int count = 0;

        for(int i = 1; i <= j; i++)
        {
            if(j % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", j);
        }
    }

    return 0;
}
