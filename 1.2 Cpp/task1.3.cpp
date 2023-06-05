#include <iostream>

int main() {
  
    std::cout << "Enter the first number: ";
    double num1;
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    double num2;
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    double num3;
    std::cin >> num3;

    double maximum = num1;

    if (num2 > maximum) {
        maximum = num2;
    }

    if (num3 > maximum) {
        maximum = num3;
    }

    std::cout << "The maximum of the three numbers is: " << maximum << std::endl;

    return 0;
}
