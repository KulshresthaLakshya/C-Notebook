// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int count[10] = {0};  // array to store frequency of digits

    // Count frequency of each digit
    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum frequency
    int maxFreq = count[0];
    int maxDigit = 0;

    for (int i = 1; i < 10; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}
