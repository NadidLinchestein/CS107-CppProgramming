/*
    Write a program in C to count the total number of words in a string.

    Test Data:
    Input the string: This is w3resource.com

    Expected Output:
    Total number of words in the string is: 3 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];     // Array to store the input string
    int wordCount = 0;   // Counter for the total number of words
    int inWord = 0;      // Flag to check if currently inside a word

    // Prompt user for input & Read the input string including spaces
    printf("Input the string: ");
    fgets(input, sizeof(input), stdin); 

    // Loop through each character in the input string
    for (int i = 0; input[i] != '\0'; i++) {  

        // Check for whitespace characters (space, newline, or tab)
        if (input[i] == ' ' || input[i] == '\n' || input[i] == '\t') {
            // Mark as outside a word
            inWord = 0; 

        } else if (inWord == 0) {
            // A non-whitespace character marks the start of a new word
            inWord = 1;     // Mark as inside a word
            wordCount++;    // Increment the word count
        }
    }

    // Display the result
    printf("Total number of words in the string is: %d\n", wordCount);

    return 0;
}