// Write a program to swap the first and last digit of a number. 

#include <stdio.h>

int main() {
    int n, num, first, last, digits = 0, power = 1;
    scanf("%d", &n);

    num = n;
    last = n % 10; 

    // Find number of digits
    while (num > 0) {
        digits++;
        num = num / 10;
    }

    // Find first digit
    num = n;
    first = num;
    while (first >= 10) {
        first = first / 10;
    }

    // If number has only 1 digit, swapping does nothing
    if (digits == 1) {
        printf("%d", n);
        return 0;
    }

    // Calculate power of 10 for first digit
    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    // Swap first and last digits
    int swapped = last * power + (n % power / 10) * 10 + first;

    printf("%d", swapped);

    return 0;
}
