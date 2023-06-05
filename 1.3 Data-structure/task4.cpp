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

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        std::cout << "Enqueued element: " << value << std::endl;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue element." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        std::cout << "Dequeued element: " << temp->data << std::endl;
        delete temp;

        if (front == nullptr)
            rear = nullptr;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Nothing to display." << std::endl;
            return;
        }

        std::cout << "Queue elements: ";
        Node* current = front;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.display();

    queue.dequeue();
    queue.dequeue();
    queue.display();

    queue.enqueue(60);
    queue.enqueue(70);
    queue.display();

    return 0;
}
