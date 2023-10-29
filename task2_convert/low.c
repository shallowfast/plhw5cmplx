#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "header.h"

void ToLower() {
	int c;
	char str[100];
	printf("Enter a string: ");
	
	// flush input
	while ((c = getchar()) != '\n' && c != EOF);
	
	// read input
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
	
	char *ptr = str;
	char *resultPtr = str;
	
    while (*ptr) {
        *ptr = tolower((unsigned char)*ptr);
        ptr++;
    }
	printf("Result: %s\n", resultPtr);
}