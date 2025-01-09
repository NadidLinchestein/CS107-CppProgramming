/*
    Create a calculator that takes a number, a basic math operator (+,-,*,/,^), and a second number all from user input, and have it print the result of the mathematical operation. 
    The mathematical operations should be wrapped inside of functions.
*/

#include <iostream>
#include <cmath> // For power operation
using namespace std;

// Function for addition
double add(double a, double b) {
    return a + b;
}

// Function for subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function for multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function for division
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return NAN; // Not a Number
    }
    return a / b;
}

// Function for power operation
double power(double a, double b) {
    return pow(a, b);
}

int main() {
    double num1, num2;
    char op;

    // Ask the user for the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user for the operator
    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> op;

    // Ask the user for the second number
    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    // Perform the operation based on the operator
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '^':
            result = power(num1, num2);
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1;
    }

    // Print the result
    cout << "Result: " << result << endl;

    return 0;
}