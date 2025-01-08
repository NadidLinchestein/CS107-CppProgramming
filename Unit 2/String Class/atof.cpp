/*
    The function atof() converts str into a double, then returns that value. 
    str must start with a valid number, but can be terminated with any non-numerical character, other than "E" or "e". 
*/

#include <iostream>
#include <cstdlib>  // For atof

int main() {
    const char *numStr = "  -123.456e2";
    double result = atof(numStr); 

    std::cout << "Converted number: " << result << std::endl;
    
    return 0;
}