/*
    Write a program that converts Centigrade to Fahrenheit.
    
    Expected Output:
    Input a temperature (in Centigrade): 45
    113.000000 degrees Fahrenheit.
*/

#include <iostream>

int main() {
    // Input temperature in Centigrade
    double centigrade;
    std::cout << "Input a temperature (in Centigrade): ";
    std::cin >> centigrade;

    // Convert to Fahrenheit
    double fahrenheit = (centigrade * 9/5) + 32;

    // Print the result
    std::cout << fahrenheit << " degrees Fahrenheit." << std::endl;

    return 0;
}
