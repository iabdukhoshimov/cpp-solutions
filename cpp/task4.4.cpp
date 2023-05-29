#include <stdio.h>

void findFactorial(int* number, int* result) {
    *result = 1; 
    
    if (*number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }
    
    for (int i = 1; i <= *number; i++) {
        *result *= i;
    }
}

int main() {
    int number, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    findFactorial(&number, &result);
    
    printf("Factorial: %d\n", result);
    
    return 0;
}
