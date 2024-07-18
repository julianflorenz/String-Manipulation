#include <stdio.h>
#include "falcone_stringman.h"

int main() {
    char input[100];
    char original[100];

    // for inputting a string
    printf("Enter a string: ");
    if (scanf_s("%99[^\n]", input, 100) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    // Copies the original string
    strcpy(original, input);

    // Prints the original string
    printf("Original String: %s\n", original);

    // Reversing the string
    reverseString(input);
    printf("Reversed: %s\n", input);

    // Converting to uppercase
    toUppercase(original);
    printf("Uppercase: %s\n", original);

    // Converting to lowercase
    toLowercase(original);
    printf("Lowercase: %s\n", original);

    // Calculates and print length
    int len = stringLength(original);
    printf("Length: %d\n", len);

    return 0;
}
