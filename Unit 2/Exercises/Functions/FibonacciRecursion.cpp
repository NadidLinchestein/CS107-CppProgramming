/*
    Write a recursive function that finds the #n integer of the Fibonacci sequence.
    This implementation is simple but may become inefficient for large 𝑛 due to repeated calculations. For improved efficiency, consider using memoization or iterative approaches.
*/

#include <iostream>
using namespace std;

// Function to calculate the Fibonacci number recursively
int fibonacci(int n) {
    // Base cases: predefined values for n = 0 and n = 1
    if (n == 0) {
        return 0; // Fibonacci(0) is 0
    }
    if (n == 1) {
        return 1; // Fibonacci(1) is 1
    }

    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Input variable
    int n;

    // Ask the user for the Fibonacci index to calculate
    cout << "Enter a non-negative integer (n) to find Fibonacci(n): ";
    cin >> n;

    // Validate the input
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate Fibonacci(n) using the recursive function
    int result = fibonacci(n);

    // Output the result
    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}