#ifndef MAXIMUM_H
#define MAXIMUM_H

int maximum(int a, int b);

#endif

#include "maximum.h"

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

#include <iostream>
#include "maximum.h"

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int maxNum = maximum(num1, num2);
    std::cout << "The maximum number is: " << maxNum << std::endl;

    return 0;
}
