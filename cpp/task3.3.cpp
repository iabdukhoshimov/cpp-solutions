#include <iostream>

double findMaximum(double num1, double num2, double num3) {
    double maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }

    if (num3 > maxNum) {
        maxNum = num3;
    }

    return maxNum;
}

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

    double maximum = findMaximum(num1, num2, num3);

    std::cout << "The maximum of the three numbers is: " << maximum << std::endl;

    return 0;
}
