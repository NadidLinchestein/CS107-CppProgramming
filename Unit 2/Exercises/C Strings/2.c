/*
    Write a program in C to find the length of a string without using library function.

    Test Data:
    Input the string: w3resource.com

    Expected Output: 
    Length of the string is: 15
*/

#include <stdio.h>


int main() {
    char str[100];
    int length = 0;

    // Input the string
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Output the length of the string. Subtracting 1 to ignore the newline character added by fgets
    printf("Length of the string is: %d\n", length - 1);
    
    return 0;
}