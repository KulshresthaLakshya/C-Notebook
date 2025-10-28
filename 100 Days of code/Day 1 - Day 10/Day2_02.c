// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main()
{
    float radius, circumference, area;
    float pi = 3.141;

    printf("Enter Radius: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of Circle: %f\n", area);
    printf("Circumference of Circle: %f\n", circumference);
    return 0;
}