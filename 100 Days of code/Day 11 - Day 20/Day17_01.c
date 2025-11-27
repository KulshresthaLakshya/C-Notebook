#include <stdio.h>

int main() {
    int num, original, sum = 0, digit;

    scanf("%d", &num);
    original = num;

    while (original > 0) {
        digit = original % 10;
        sum += digit * digit * digit;  // cube each digit
        original /= 10;
    }

    if (sum == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
