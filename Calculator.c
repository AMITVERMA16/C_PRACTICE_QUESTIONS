#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("WELCOME TO C CALCULATOR.\n");
    printf("Enter an operation in the format: number operator number (e.g., 5 + 3):\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    if (operator == '+') {
        printf("Result: %.2f\n", num1 + num2);
    } else if (operator == '-') {
        printf("Result: %.2f\n", num1 - num2);
    } else if (operator == '*') {
        printf("Result: %.2f\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2f\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}
