// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() 
{
    int num1, num2;
    char operator;
    float result;

    printf("Enter two integers and an operator: ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("Result for addition: %.3f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result for subtraction: %.3f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result for multiplication: %.3f\n", result);
            break;
        case '/':
            if (num2 != 0) 
            {
                result = (float)num1 / num2;
                printf("Result for division: %.3f\n", result);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) 
            {
                result = num1 % num2;
                printf("Remainder: %.3f\n", result);
            } 
            else 
            {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
    }
    return 0;
}
