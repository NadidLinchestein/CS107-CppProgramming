/*
    NuMetro has a special on movies for all members of the public but special discounts for students and pensioners. 
    
    If pensioners or students buy a movie ticket they receive 10% if they buy a movie and popcorns, they receive 20% discount. 
    100 Other customers only receive a discount when they buy a movie ticket and popcorn; there is no discount for just a movie ticket alone. 
    
    Write a program that will consist of two functions. The program must prompt the user for type of customer (‘p’ for pensioner, ‘s’ for student, ‘o’ for other). 
    
    It must then call the relevant function according to that entry. The first function must receive the customer type and calculates discount for pensioners and students. 
    The second function calculates the discount for customers that are not pensioners or students.
*/

#include <iostream>
#include <iomanip> // For controlling output formatting
using namespace std;

// Function to calculate discounts for pensioners and students
double calculateDiscountForPensionersAndStudents(char customerType, bool includesPopcorn) {
    double discount = 0.0;

    if (customerType == 'p' || customerType == 's') {
        if (includesPopcorn) {
            discount = 20.0; // 20% discount for movie and popcorn
        } else {
            discount = 10.0; // 10% discount for just the movie
        }
    }

    return discount;
}

// Function to calculate discounts for other customers
double calculateDiscountForOthers(bool includesPopcorn) {
    double discount = 0.0;

    if (includesPopcorn) {
        discount = 10.0; // 10% discount for movie and popcorn
    }

    return discount;
}

int main() {
    char customerType;
    bool includesPopcorn;
    double discount;

    // Prompt user for customer type
    cout << "Enter customer type ('p' for pensioner, 's' for student, 'o' for other): ";
    cin >> customerType;

    // Validate customer type input
    if (customerType != 'p' && customerType != 's' && customerType != 'o') {
        cout << "Invalid customer type entered. Please restart the program and enter 'p', 's', or 'o'." << endl;
        return 1;
    }

    // Ask whether the purchase includes popcorn
    cout << "Does the purchase include popcorn? (1 for Yes, 0 for No): ";
    cin >> includesPopcorn;

    // Call the relevant function based on customer type
    if (customerType == 'p' || customerType == 's') {
        discount = calculateDiscountForPensionersAndStudents(customerType, includesPopcorn);
    } else {
        discount = calculateDiscountForOthers(includesPopcorn);
    }

    // Output the calculated discount
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "The discount for this purchase is: " << discount << "%" << endl;

    return 0;
}
