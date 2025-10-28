// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32; // Formula to convert Celsius to Fahrenheit
    printf("Temperature in Celsius is %f which in Fahrenheit is: %f\n",celsius, fahrenheit);
    return 0;
}