// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() 
  {
    int a, b, lcm;
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;

    // Find LCM by checking multiples
    for (int i = max; ; i++) 
        {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("%d", lcm);

    return 0;
}
