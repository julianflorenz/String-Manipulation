#include "falcone_stringman.h"
#include <stdio.h>

// Custom implementation of strlen
int cusStrlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Used to reverse a string
void reverseString(char str[]) {
    int length = cusStrlen(str);
    int i;
    char temp;

    // Swaps characters from both beginning and ends of the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Used to convert the given string to uppercase
void toUppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
}

// Used to convert the given string to lowercase
void toLowercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

// Solves the calculation in the length of a string
int stringLength(char str[]) {
    return customStrlen(str);
}
