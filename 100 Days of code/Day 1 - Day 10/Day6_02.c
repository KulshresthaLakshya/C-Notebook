// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main ()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

if ( a == 0 )
{
    printf("%d The given number is ZERO\n", a);

}
else
    {
        if (a < 0)
            {
                printf("%d The given number is NEGATIVE\n", a);
            } 
        else 
            {
                printf("%d The given number is POSITIVE\n", a);
            }
        }
    return 0;
}