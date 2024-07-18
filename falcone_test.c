#include <stdio.h>
#include "falcone_stringman.h"

int main() {
    char str[100]; // Assuming a maximum length for the input string
    
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Read up to 99 characters (leave space for null terminator)
    
    printf("Original string: %s\n", str);
    
    reverseString(str);
    printf("Reversed string: %s\n", str);
    
    toUppercase(str);
    printf("Uppercase string: %s\n", str);
    
    toLowercase(str);
    printf("Lowercase string: %s\n", str);
    
    int length = stringLength(str);
    printf("Length of string: %d\n", length);
    
    return 0;
}
