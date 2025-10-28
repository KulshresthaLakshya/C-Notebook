// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
    int main()
    {
        float Length, Breadth, Area, Perimeter;
        printf("Enter Length: ");
        scanf("%f", &Length);
        printf("Enter Breadth: ");
        scanf("%f", &Breadth);
        Area = Length * Breadth;
        Perimeter = 2 * (Length + Breadth);
        printf("Area of Rectangle: %f\n", Area);
        printf("Perimeter of Rectangle: %f\n", Perimeter);
        return 0;
    }