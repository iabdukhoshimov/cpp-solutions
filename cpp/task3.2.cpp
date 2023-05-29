#include <iostream>

// Function to find the maximum of two numbers
double findMaximum(double num1, double num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    std::cout << "Enter the first number: ";
    double num1;
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    double num2;
    std::cin >> num2;

    double maximum = findMaximum(num1, num2);

    std::cout << "The maximum of the two numbers is: " << maximum << std::endl;

    return 0;
}
