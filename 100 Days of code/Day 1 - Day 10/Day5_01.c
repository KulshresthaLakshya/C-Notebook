// Write a program to calculate simple and compound interest for given principal, rate, and time.
// Simple Interest = (Principal * Rate * Time) / 100
// Compound Interest = Principal * ( (1 + (Rate/100))^Time ) - Principal
#include <stdio.h>
int main()
{
    float principal, roi, time, si, ci;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest (in percentage): ");
    scanf("%f", &roi);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    si = (principal * roi * time) / 100; 
    printf("Simple Interest: %f\n", si);

    // Calculate Compound Interest
    ci = principal * (pow((1+(roi / 100)), time)) - principal; 
    printf("Compound Interest: %f\n", ci);

    return 0;
}