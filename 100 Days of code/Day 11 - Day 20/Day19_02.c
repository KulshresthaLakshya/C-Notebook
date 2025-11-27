//Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;   // add last digit
        n = n / 10;      // remove last digit
    }

    printf("%d", sum);

    return 0;
}
