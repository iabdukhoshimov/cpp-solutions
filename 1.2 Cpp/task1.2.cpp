#include <iostream>

int main() {
    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    double num1;
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    double num2;
    std::cin >> num2;

    // Find the maximum of the two numbers
    double maximum = (num1 > num2) ? num1 : num2;

    // Display the maximum
    std::cout << "The maximum of the two numbers is: " << maximum << std::endl;

    return 0;
}
