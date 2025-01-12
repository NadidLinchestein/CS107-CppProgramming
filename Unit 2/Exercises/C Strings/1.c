/*
    Write a program in C to input a string and print it.

    Test Data:
    Input the string: Welcome, w3resource

    Expected Output:
    The string you entered is: Welcome, w3resource 
*/

#include <stdio.h>

int main() {
    // Define a character array to store the input string
    char str[100];

    // Prompt the user to enter a string
    printf("Input the string: ");

    // Read the string from the standard input
    fgets(str, sizeof(str), stdin);

    // Print the string entered by the user
    printf("The string you entered is: %s", str);

    return 0;
}