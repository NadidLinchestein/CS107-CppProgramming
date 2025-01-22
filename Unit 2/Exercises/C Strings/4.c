/*
    Write a program in C to print individual characters of string in reverse order.

    Test Data:
    Input the string: w3resource.com

    Expected Output:
    The characters of the string in reverse are:
    m  o  c  .  e  c  r  u  o  s  e  r  3  w
*/


#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // Array to hold the input string
    int length;      // Variable to store the length of the string

    // Prompt the user for input
    printf("Input the string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    length = strlen(input);
    
    if (input[length - 1] == '\n') {
        // Replace newline with null terminator
        input[length - 1] = '\0';   
        
        // Adjust the length
        length--;                 
    }

    // Display the characters of the string in reverse
    printf("\nThe characters of the string in reverse are:\n");
    
    for (int i = length - 1; i >= 0; i--) {
        // Print each character followed by two spaces
        printf("%c  ", input[i]);
    }

    // Add a newline at the end for proper formatting
    printf("\n");

    return 0;
}