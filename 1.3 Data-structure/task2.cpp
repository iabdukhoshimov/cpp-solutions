#include <iostream>

class Node {
public:
    int data;
    Node* next;

    explicit Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);

        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
    }

    void pop() {
        if (top == nullptr) {
            std::cout << "Stack Underflow" << std::endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int topElement() {
        if (top == nullptr) {
            std::cout << "Stack is empty" << std::endl;
            return -1; // Assuming -1 as a default value
        }

        return top->data;
    }

    bool empty() {
        return top == nullptr;
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
