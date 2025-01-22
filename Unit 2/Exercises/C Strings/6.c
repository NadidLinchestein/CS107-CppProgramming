/*
    Write a program in C to compare two strings without using string library functions.

    Test Data:
    Check the length of two strings:
    --------------------------------
    Input the 1st string: aabbcc
    Input the 2nd string: abcdef
    String1: aabbcc
    String2: abcdef

    Expected Output:
    Strings are not equal.

    Check the length of two strings:
    --------------------------------
    Input the 1st string: aabbcc
    Input the 2nd string: aabbcc
    String1: aabbcc
    String2: aabbcc

    Expected Output:
    Strings are equal.
*/

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare characters one by one
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Strings are not equal
        }
        i++;
    }

    // Check if both strings reached the end
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; // Strings are equal
    } else {
        return 0; // Strings are not equal
    }
}

int main() {
    char str1[100], str2[100];

    printf("Check the length of two strings:\n");
    printf("--------------------------------\n");

    // Input first string
    printf("Input the 1st string: ");
    scanf("%s", str1);

    // Input second string
    printf("Input the 2nd string: ");
    scanf("%s", str2);

    // Display the strings
    printf("String1: %s\n", str1);
    printf("String2: %s\n", str2);

    // Compare strings and display result
    if (compareStrings(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}