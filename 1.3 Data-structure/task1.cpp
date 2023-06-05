#include <iostream>

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            std::cout << "Stack Overflow" << std::endl;
            return;
        }

        arr[++top] = value;
    }

    void pop() {
        if (top < 0) {
            std::cout << "Stack Underflow" << std::endl;
            return;
        }

        --top;
    }

    int topElement() {
        if (top < 0) {
            std::cout << "Stack is empty" << std::endl;
            return -1; // Assuming -1 as a default value
        }

        return arr[top];
    }

    bool empty() {
        return top < 0;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.topElement() << std::endl;

    stack.pop();

    std::cout << "Top element after pop: " << stack.topElement() << std::endl;

    return 0;
}
