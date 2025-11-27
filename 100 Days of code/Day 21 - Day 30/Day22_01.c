//  Write a program to check if a number is a strong number. 

#include <stdio.h>

int main() {
    int n, num, sum = 0;
    scanf("%d", &n);

    num = n;

    while (num > 0) {
        int digit = num % 10;
        int fact = 1;

        // Calculate factorial of digit
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num = num / 10;
    }

    if (sum == n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
