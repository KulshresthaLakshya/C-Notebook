//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;   // default is 1
    int foundOdd = 0;  // to check if any odd digit exists

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {   // check odd digit
            product *= digit;
            foundOdd = 1;
        }

        n = n / 10;
    }

    // If no odd digits found, product should remain 1 (as per question)
    printf("%d", product);

    return 0;
}
