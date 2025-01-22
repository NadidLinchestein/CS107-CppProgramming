/*
    Write a program in C to separate the individual characters from a string.
    
    Test Data:
    Input the string: w3resource.com
    
    
    Expected Output:
    The characters of the string are: 
    w  3  r  e  s  o  u  r  c  e  .  c  o  m
*/

#include <stdio.h>

int main() {
    char input[100]; // Array to hold the input string
    int i;           // Loop counter

    // Prompt the user for input
    printf("Input the string: ");
    
    // Read the input string, including spaces, and ensure it doesn't exceed the array size
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            
            // Replace newline with null terminator
            input[i] = '\0'; 
            
            break;
        }
    }

    // Display the characters of the string
    printf("\n");
    printf("The characters of the string are:\n");
    
    for (i = 0; input[i] != '\0'; i++) {
        // Print each character followed by two spaces
        printf("%c  ", input[i]);
    }

    // Add a newline at the end of the output for better formatting
    printf("\n");
    
    return 0;
}