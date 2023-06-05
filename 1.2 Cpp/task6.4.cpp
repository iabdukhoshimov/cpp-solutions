#include <iostream>
#include <deque>

class Deque {
private:
    std::deque<int> deque;

public:
    void push_front(int value) {
        deque.push_front(value);
    }

    void push_back(int value) {
        deque.push_back(value);
    }

    void pop_front() {
        if (!deque.empty()) {
            deque.pop_front();
        } else {
            std::cout << "Deque is empty. Cannot pop front." << std::endl;
        }
    }

    void pop_back() {
        if (!deque.empty()) {
            deque.pop_back();
        } else {
            std::cout << "Deque is empty. Cannot pop back." << std::endl;
        }
    }

    int front() {
        if (!deque.empty()) {
            return deque.front();
        } else {
            std::cout << "Deque is empty. Cannot get front." << std::endl;
            return -1;  // Assuming -1 as a default value
        }
    }

    int back() {
        if (!deque.empty()) {
            return deque.back();
        } else {
            std::cout << "Deque is empty. Cannot get back." << std::endl;
            return -1;  // Assuming -1 as a default value
        }
    }

    bool empty() {
        return deque.empty();
    }

    int size() {
        return deque.size();
    }
};

int main() {
    Deque deque;

    deque.push_front(10);
    deque.push_back(20);
    deque.push_front(5);

    std::cout << "Front element: " << deque.front() << std::endl;
    std::cout << "Back element: " << deque.back() << std::endl;

    deque.pop_front();
    deque.pop_back();

    std::cout << "Deque size: " << deque.size() << std::endl;

    return 0;
}
