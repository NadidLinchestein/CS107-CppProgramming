/* Program to generate the first 10 Fibonacci numbers using arrays */

#include <stdio.h>

int main() {
    // Declare an array to store the Fibonacci numbers
    int fib[10];

    // Initialize the first two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Generate the remaining Fibonacci numbers
    for (int i = 2; i < 10; ++i) {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    // Print the Fibonacci numbers
    printf("The first 10 Fibonacci numbers are:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", fib[i]);
    }

    return 0; // Indicate successful execution
}
