#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;

public:
    void set_value(const std::string& animalName, int animalAge) {
        name = animalName;
        age = animalAge;
    }
};

class Zebra : public Animal {
public:
    void display() {
        std::cout << "Zebra Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "Place of Origin: Africa" << std::endl;
    }
};

class Dolphin : public Animal {
public:
    void display() {
        std::cout << "Dolphin Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "Place of Origin: Oceans" << std::endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Ziggy", 5);
    dolphin.set_value("Daisy", 8);

    zebra.display();
    std::cout << std::endl;
    dolphin.display();

    return 0;
}
