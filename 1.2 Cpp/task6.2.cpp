#include <iostream>

class Mother {
public:
    void display() {
        std::cout << "I am the Mother." << std::endl;
    }
};

class Daughter : public Mother {
public:
    void display() {
        std::cout << "I am the Daughter." << std::endl;
    }
};

int main() {
    Daughter daughter;
    daughter.display();

    return 0;
}
