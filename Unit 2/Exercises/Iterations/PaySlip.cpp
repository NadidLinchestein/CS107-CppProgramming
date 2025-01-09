/*
    Write a program that will calculate and print pay slips. User inputs are the name of the employee, the number of hours worked and the hourly pay rate. 
    You have to declare three functions. d) one for input; e) one to calculate the employee’s pay; and f) one to print the payslip. The input function has to input the name of the employee, 
    the number of hours worked and the hourly pay rate into the variables theEmployee, theHoursWorked, and thePayRate. The variable employee is a string and the other two variables are of type float. 
    As the values of theEmployee, theHoursWorked, and thePayRate will be changed in this function, reference parameters need to be used. The calculation function will receive two parameters that represent the number of hours worked and the hourly pay rate, 
    do the calculation and return the pay for the employee. An employee, who has worked more than 40 hours, is paid 1.5 times the hourly pay rate for each hour of overtime. As the parameters are not changed in the function, they should be value parameters. 
    The function should return a float value which represents the pay. The output function has to display the name of the employee, the number of hours worked, the number of overtime hours and the hourly pay rate entered by the user as well as the employee’s pay. 

    For example:
    Pay slip for Harry Matsipe Hours worked: 43.5 hours Overtime hours: 3.5 Hourly pay rate: R125.35 Pay: R5672.09

    The main function includes a for loop that allows the user to repeat the calculation of a pay slip for five employees. We give the main function below. You must submit the three functions you have developed as well as output for repeating the loop five times with the following input data:
    Harry Matsipe 43.5 125.35 
    Ellen Malan 39.4 112.75 
    Joey Rashdien 40 120.45 
    Mpho Bopape 41.2 123.60 
    Mohamed Jasim 39.7 135.30
*/

#include <iostream>
#include <string>
#include <iomanip>

// Function declarations
void inputEmployeeData(std::string& employeeName, float& hoursWorked, float& hourlyRate);
float calculatePay(float hoursWorked, float hourlyRate);
void printPaySlip(const std::string& employeeName, float hoursWorked, float hourlyRate, float pay);

int main() {
    // Loop to calculate pay slips for 5 employees
    for (int i = 0; i < 5; ++i) {
        // Variables to store employee data
        std::string employeeName;
        float hoursWorked = 0.0;
        float hourlyRate = 0.0;

        // Step 1: Input employee data
        inputEmployeeData(employeeName, hoursWorked, hourlyRate);

        // Step 2: Calculate the pay
        float pay = calculatePay(hoursWorked, hourlyRate);

        // Step 3: Print the pay slip
        printPaySlip(employeeName, hoursWorked, hourlyRate, pay);

        std::cout << "\n-------------------------------\n";
    }

    return 0;
}

// Function to input employee data
void inputEmployeeData(std::string& employeeName, float& hoursWorked, float& hourlyRate) {
    std::cout << "Enter the employee's name: ";
    std::getline(std::cin, employeeName);

    std::cout << "Enter the hours worked: ";
    std::cin >> hoursWorked;

    std::cout << "Enter the hourly pay rate: ";
    std::cin >> hourlyRate;

    // Clear the input buffer to avoid issues with getline in subsequent loops
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Function to calculate the pay
float calculatePay(float hoursWorked, float hourlyRate) {
    const float OVERTIME_THRESHOLD = 40.0; // Regular hours before overtime
    const float OVERTIME_RATE = 1.5;      // Overtime multiplier

    float regularPay = 0.0;
    float overtimePay = 0.0;

    if (hoursWorked > OVERTIME_THRESHOLD) {
        // Calculate regular pay and overtime pay
        regularPay = OVERTIME_THRESHOLD * hourlyRate;
        overtimePay = (hoursWorked - OVERTIME_THRESHOLD) * (hourlyRate * OVERTIME_RATE);
    } else {
        // All hours are regular pay
        regularPay = hoursWorked * hourlyRate;
    }

    return regularPay + overtimePay; // Total pay
}

// Function to print the pay slip
void printPaySlip(const std::string& employeeName, float hoursWorked, float hourlyRate, float pay) {
    // Calculate overtime hours
    const float OVERTIME_THRESHOLD = 40.0;
    float overtimeHours = (hoursWorked > OVERTIME_THRESHOLD) ? (hoursWorked - OVERTIME_THRESHOLD) : 0.0;

    // Set output formatting for currency
    std::cout << std::fixed << std::setprecision(2);

    // Display the pay slip
    std::cout << "Pay slip for " << employeeName << "\n";
    std::cout << "Hours worked: " << hoursWorked << " hours\n";
    std::cout << "Overtime hours: " << overtimeHours << "\n";
    std::cout << "Hourly pay rate: R" << hourlyRate << "\n";
    std::cout << "Pay: R" << pay << "\n";
}