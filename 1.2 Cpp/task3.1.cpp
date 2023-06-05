#include <iostream>

double calculateSum(double num1, double num2) {
    return num1 + num2;
}

int main() {

    std::cout << "Enter the first number: ";
    double num1;
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    double num2;
    std::cin >> num2;

    double sum = calculateSum(num1, num2);

    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
