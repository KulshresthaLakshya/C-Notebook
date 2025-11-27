// Write a program to check if a number is a perfect number. 

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    // Find sum of proper divisors
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if sum equals the number
    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
