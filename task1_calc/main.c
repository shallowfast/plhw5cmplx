#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    double num1, num2;
    int intNum;
    
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Factorial\n");
    printf("6. Square Root\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
            // For operations with two numbers
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            break;

        case 5:
            // For factorial operation
            printf("Enter a non-negative integer: ");
            scanf("%d", &intNum);
            break;

        case 6:
            // For square root operation
            printf("Enter a number: ");
            scanf("%lf", &num1);
            break;

        default:
            printf("Invalid choice\n");
            return 1;
    }

    switch (choice) {
        case 1:
            printf("Result: %lf\n", add(num1, num2));
            break;

        case 2:
            printf("Result: %lf\n", subtract(num1, num2));
            break;

        case 3:
            printf("Result: %lf\n", multiply(num1, num2));
            break;

        case 4:
            if (num2 != 0) {
                printf("Result: %lf\n", divide(num1, num2));
            } else {
                printf("Error: Division by zero\n");
            }
            break;

        case 5:
            printf("Result: %d\n", factorial(intNum));
            break;

        case 6:
            if (num1 >= 0) {
                printf("Result: %lf\n", squareRoot(num1));
            } else {
                printf("Error: Square root of a negative number is not defined\n");
            }
            break;
    }

    return 0;
}