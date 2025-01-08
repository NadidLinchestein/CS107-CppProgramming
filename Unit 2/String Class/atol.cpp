/*
    The function atol() converts str into a long, then returns that value. atol() will read from str until it finds any character that should not be in a long.
    It is defined in the <cstdlib> header file.
*/

#include <iostream>
#include <cstdlib> // Required for atol

int main() {
    // Example C-style string representing a number
    const char* strNumber = "12345";

    // Using atol to convert the string to a long integer
    long convertedNumber = atol(strNumber);

    // Displaying the original string and the converted number
    std::cout << "The original string: " << strNumber << std::endl;
    std::cout << "The converted long integer: " << convertedNumber << std::endl;

    // Another example with a larger number
    const char* largeStrNumber = "9876543210";
    long largeConvertedNumber = atol(largeStrNumber);

    // Displaying the second result
    std::cout << "The original string: " << largeStrNumber << std::endl;
    std::cout << "The converted long integer: " << largeConvertedNumber << std::endl;

    return 0;
}
