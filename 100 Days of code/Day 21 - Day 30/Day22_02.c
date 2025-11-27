// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= n; i++) {
        sum += (double) numerator / denominator;

        numerator += 2;   // next odd number
        denominator += 2; // next even number
    }

    printf("%.2lf", sum);

    return 0;
}
