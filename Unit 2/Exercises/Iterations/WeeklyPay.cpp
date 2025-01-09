/*
    Write a program named question6c.cpp that demonstrates the use of the following functions. 
    
    A C++ function named getName() prompts the user for two string values; first name and last name and return a combination of the two as one value. 
    The second function getHours() calculates employee’s weekly pay, it must receive one argument, fullName, a string variable and a float value for the rate. 
    
    It must then prompt the user for hours worked for each day of the week, i.e. Monday – Friday and calculates the weekly pay. 
    Employees who have worked more than 40 hours that week will receive a bonus of 10% and those who have worked less than 40 hour will receive 10% less pay for that week.
*/

#include <iostream>
#include <string>
#include <iomanip> // For setting precision

using namespace std;

// Function prototypes
string getName();
float getHours(const string& fullName, float rate);

int main() {
    // Get the employee's full name
    string fullName = getName();

    // Get the hourly rate from the user
    float rate;
    cout << "Enter the hourly rate: ";
    cin >> rate;

    // Calculate weekly pay
    float weeklyPay = getHours(fullName, rate);

    // Display the weekly pay
    cout << fixed << setprecision(2); // Format the output to 2 decimal places
    cout << "\nWeekly pay for " << fullName << ": $" << weeklyPay << endl;

    return 0;
}

// Function to get the full name by combining first name and last name
string getName() {
    string firstName, lastName;

    // Prompt user for first and last name
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    // Combine first and last name
    return firstName + " " + lastName;
}

// Function to calculate weekly pay
float getHours(const string& fullName, float rate) {
    float totalHours = 0.0f;
    float dailyHours;

    // Loop through each day of the week (Monday to Friday)
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    for (const string& day : days) {
        cout << "Enter hours worked on " << day << ": ";
        cin >> dailyHours;

        // Accumulate total hours worked
        totalHours += dailyHours;
    }

    // Calculate base pay
    float basePay = totalHours * rate;

    // Apply bonus or deduction based on total hours
    if (totalHours > 40) {
        basePay *= 1.10f; // Add 10% bonus
        cout << fullName << " worked overtime! A 10% bonus has been applied.\n";
    } else if (totalHours < 40) {
        basePay *= 0.90f; // Deduct 10%
        cout << fullName << " worked less than 40 hours. A 10% deduction has been applied.\n";
    }

    return basePay;
}