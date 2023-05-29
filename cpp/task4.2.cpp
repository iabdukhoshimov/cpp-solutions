#include <stdio.h>

void sum(int* a, int* b, int* result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, result;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum(&num1, &num2, &result);
    
    printf("Sum: %d\n", result);
    
    return 0;
}
