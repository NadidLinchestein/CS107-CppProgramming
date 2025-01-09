/*
    Here’s a non-recursive solution to calculate the Fibonacci sequence using an iterative approach, which is far more efficient for large inputs compared to recursion. 
    
    This approach avoids the redundant calculations inherent in recursion by iteratively computing Fibonacci numbers.
*/

#include <iostream>
#include <chrono> // For measuring execution time
using namespace std;

// Iterative function to calculate the Fibonacci number
long long fibonacci_iterative(int n) {
    if (n == 0) return 0; // Base case for Fibonacci(0)
    if (n == 1) return 1; // Base case for Fibonacci(1)

    long long prev = 0, curr = 1; // Starting values for Fibonacci sequence
    for (int i = 2; i <= n; ++i) {
        long long next = prev + curr; // Compute the next Fibonacci number
        prev = curr;                  // Shift prev to curr
        curr = next;                  // Shift curr to next
    }
    return curr; // The nth Fibonacci number
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

    // Measure and calculate using the recursive method
    cout << "Calculating Fibonacci recursively...\n";
    auto start_recursive = chrono::high_resolution_clock::now();
    
    // Uncomment the line below to include the recursive implementation 
    // long long result_recursive = fibonacci_recursive(n);
    auto end_recursive = chrono::high_resolution_clock::now();
    
    // Uncomment the line below to display the recursive result
    // cout << "Fibonacci(" << n << ") = " << result_recursive << endl;

    // Measure and calculate using the iterative method
    cout << "Calculating Fibonacci iteratively...\n";
    auto start_iterative = chrono::high_resolution_clock::now();
    long long result_iterative = fibonacci_iterative(n);
    auto end_iterative = chrono::high_resolution_clock::now();
    cout << "Fibonacci(" << n << ") = " << result_iterative << endl;

    // Display execution times
    auto recursive_duration = chrono::duration_cast<chrono::milliseconds>(end_recursive - start_recursive).count();
    auto iterative_duration = chrono::duration_cast<chrono::milliseconds>(end_iterative - start_iterative).count();
    cout << "Recursive time: " << recursive_duration << " ms (if tested)." << endl;
    cout << "Iterative time: " << iterative_duration << " ms." << endl;

    return 0;
}