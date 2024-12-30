/*
    Write a program in C++ to print the sum of two numbers using variables.
    
    Print the sum of two numbers :
    -----------------------------------
    The sum of 29 and 30 is : 59
*/

#include <iostream>

int main() {
    // Declare and initialize the variables
    int num1 = 29;
    int num2 = 30;
    
    // Calculate the sum
    int sum = num1 + num2;
    
    // Print the result
    std::cout << "Print the sum of two numbers :" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "The sum of " << num1 << " and " << num2 << " is : " << sum << std::endl;

    return 0;
}