//  Write a program to find the 1’s complement of a binary number and print it. 


#include <stdio.h>

int main() {
    long long binary, reversed = 0, temp;
    scanf("%lld", &binary);

    temp = binary;

    // Reverse the number to process digits from left to right
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp = temp / 10;
    }

    // Flip each bit and print
    while (reversed > 0) {
        int digit = reversed % 10;
        if (digit == 0)
            printf("1");
        else
            printf("0");
        reversed = reversed / 10;
    }

    return 0;
}
