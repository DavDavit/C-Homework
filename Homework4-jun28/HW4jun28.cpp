#include <iostream>

int main() {
    int num = 20;

    int& ref = num;

    int* ptr = &num;

    ref = 35;

    *ptr = 46;

    std::cout << "Modified value by the reference: " << ref << std::endl;
    std::cout << "Modified value by the pointer: " << *ptr << std::endl;

    return 0;
}
