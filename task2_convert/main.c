#include <stdio.h>
#include "header.h"

int main() {
    // char input[100];
    int choice;

    printf("Select operation:\n");
    printf("1. Convert to Uppercase\n");
    printf("2. Convert to Lowercase\n");
    scanf("%d", &choice);

    // printf("Enter a string: ");
    // scanf("%s", input);

    switch (choice) {
        case 1:
            ToUpper();
            // printf("Result: %s\n", input);
            break;
        case 2:
            ToLower();
            // printf("Result: %s\n", input);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}