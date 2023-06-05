#include <iostream>

#define MAX_SIZE 100

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1 && front == 0) || (front == rear + 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue element." << std::endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % MAX_SIZE;
        arr[rear] = value;
        std::cout << "Enqueued element: " << value << std::endl;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue element." << std::endl;
            return;
        }

        std::cout << "Dequeued element: " << arr[front] << std::endl;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Nothing to display." << std::endl;
            return;
        }

        std::cout << "Queue elements: ";
        int i = front;
        while (i != rear) {
            std::cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        std::cout << arr[rear] << std::endl;
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
