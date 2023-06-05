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

    // Calculate the sum of the two numbers
    double sum = num1 + num2;

    // Display the sum
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
