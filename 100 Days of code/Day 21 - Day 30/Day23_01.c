// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    for (int i = 1; i <= n; i++) {
        sum += (double) numerator / denominator;

        numerator += 2;     // next even number
        denominator += 4;   // denominator increases by 4 each term
    }

    printf("%.2lf", sum);

    return 0;
}
