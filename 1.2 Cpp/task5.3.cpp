#ifndef MAXIMUM_H
#define MAXIMUM_H

int maximum(int a, int b, int c);

#endif

#include "maximum.h"

int maximum(int a, int b, int c) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

#include <iostream>
#include "maximum.h"

int main() {
    int num1, num2, num3;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    int maxNum = maximum(num1, num2, num3);
    std::cout << "The maximum number is: " << maxNum << std::endl;

    return 0;
}
