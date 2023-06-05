#include <iostream>

struct MyStruct {
    int a;
    double b;
    char c;
};

int main() {
    std::cout << "Size of MyStruct: " << sizeof(MyStruct) << " bytes" << std::endl;

    class MyClass {
        int x;
        double y;
        char z;
    };

    std::cout << "Size of MyClass: " << sizeof(MyClass) << " bytes" << std::endl;

    return 0;
}
