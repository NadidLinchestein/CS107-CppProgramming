/*
    Write a program that performs arithmetic division. 
    The program will use two integers, a and b (obtained by the user) and will perform the division a/b, store the result in another integer c and show the result of the division using cout. 
    
    In a similar way, extend the program to add, subtract, multiply, do modulo and power using integers a and b. 
    Modify your program so that when it starts, it asks the user which type of calculation it should do, then asks for the 2 integers, then runs the user selected calculation and outputs the result in a user friendly formatted manner.
*/

#include <iostream> 
#include <cmath>    // Include for power function

using namespace std;

int main() {
    int a, b; // Variables to hold user input
    int result; // Variable to store the result of calculations
    char operation; // Variable to store the user-selected operation

    // Display options to the user
    cout << "Welcome to the Arithmetic Calculator!" << endl;
    cout << "Please select the type of calculation you want to perform:" << endl;
    cout << "Enter '+' for Addition" << endl;
    cout << "Enter '-' for Subtraction" << endl;
    cout << "Enter '*' for Multiplication" << endl;
    cout << "Enter '/' for Division" << endl;
    cout << "Enter '%' for Modulo" << endl;
    cout << "Enter '^' for Power" << endl;

    // Get the user's choice
    cout << "Your choice: ";
    cin >> operation;

    // Prompt the user to enter two integers
    cout << "Enter the first integer (a): ";
    cin >> a;
    cout << "Enter the second integer (b): ";
    cin >> b;

    // Perform the calculation based on user input
    switch (operation) {
        case '+':
            result = a + b; // Addition
            cout << "The result of " << a << " + " << b << " is: " << result << endl;
            break;
        case '-':
            result = a - b; // Subtraction
            cout << "The result of " << a << " - " << b << " is: " << result << endl;
            break;
        case '*':
            result = a * b; // Multiplication
            cout << "The result of " << a << " * " << b << " is: " << result << endl;
            break;
        case '/':
            if (b != 0) { // Check to avoid division by zero
                result = a / b; // Integer division
                cout << "The result of " << a << " / " << b << " is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case '%':
            if (b != 0) { // Check to avoid modulo by zero
                result = a % b; // Modulo operation
                cout << "The result of " << a << " % " << b << " is: " << result << endl;
            } else {
                cout << "Error: Modulo by zero is not allowed!" << endl;
            }
            break;
        case '^':
            result = pow(a, b); // Power calculation
            cout << "The result of " << a << " ^ " << b << " is: " << result << endl;
            break;
        default:
            // Handle invalid operation input
            cout << "Invalid operation. Please run the program again and select a valid operation." << endl;
    }

    cout << "Thank you for using the Arithmetic Calculator!" << endl;
    return 0;
}