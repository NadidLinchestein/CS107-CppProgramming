/*
    The function atof() converts str into a double, then returns that value. 

    Custom implementation of atof. Assumes input is a valid numeric string or may handle simple cases with spaces. Does not handle edge cases like "INF" or "NaN"
*/

#include <iostream>
#include <cctype>
#include <cmath>

double atof(const char *str) {
    if (str == nullptr) return 0.0;

    // Skip leading whitespaces
    while (std::isspace(*str)) {
        ++str;
    }

    // Handle sign
    bool isNegative = false;
    if (*str == '-') {
        isNegative = true;
        ++str;
    } else if (*str == '+') {
        ++str;
    }

    // Convert integer part
    double result = 0.0;
    while (std::isdigit(*str)) {
        result = result * 10 + (*str - '0');
        ++str;
    }

    // Convert fractional part if present
    if (*str == '.') {
        ++str;
        double fraction = 0.0;
        double divisor = 10.0;
        while (std::isdigit(*str)) {
            fraction += (*str - '0') / divisor;
            divisor *= 10.0;
            ++str;
        }
        result += fraction;
    }

    // Handle scientific notation (e.g., 1.23e4 or 1.23E-4)
    if (*str == 'e' || *str == 'E') {
        ++str;
        bool expNegative = false;
        if (*str == '-') {
            expNegative = true;
            ++str;
        } else if (*str == '+') {
            ++str;
        }

        int exponent = 0;
        while (std::isdigit(*str)) {
            exponent = exponent * 10 + (*str - '0');
            ++str;
        }

        if (expNegative) {
            result /= std::pow(10.0, exponent);
        } else {
            result *= std::pow(10.0, exponent);
        }
    }

    return isNegative ? -result : result;
}

// Example usage
int main() {
    const char *numStr = "  -123.456e2";
    double result = atof(numStr);
    std::cout << "Converted number: " << result << std::endl;
    return 0;
}