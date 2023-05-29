#include <iostream>

unsigned long long calculateFactorial(int num) {
    unsigned long long factorial = 1;

    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long factorial = calculateFactorial(number);

        std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    }

    return 0;
}
