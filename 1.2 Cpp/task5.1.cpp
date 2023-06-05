// sum.h
#ifndef SUM_H
#define SUM_H

int sum(int a, int b);

#endif


#include "sum.h"

int sum(int a, int b) {
    return a + b;
}

#include <iostream>
#include "sum.h"

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = sum(num1, num2);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}
