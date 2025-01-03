/* Program to calculate and display the cubes of numbers */

#include <stdio.h>

// Define array size for clarity and flexibility
#define ARRAY_SIZE 20  

int main() {
    // Array to store cube values
    int cubes[ARRAY_SIZE];
    
    // Calculate cubes for numbers from 1 to ARRAY_SIZE - 1
    for (int i = 1; i < ARRAY_SIZE; i++) {
        cubes[i] = i * i * i;
    }

    // Display the numbers and their cubes
    printf("Number\tCube\n");
    printf("----------------\n");
    
    for (int i = 1; i < ARRAY_SIZE; i++) {
        printf("%d\t%d\n", i, cubes[i]);
    }

    return 0;
}
