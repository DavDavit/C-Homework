#include <iostream>

int main() {
    double d = 0.0;
    double *const ptr = &d;

    std::cout << "Insert a number of the double type: ";
    std::cin >> d;

    *ptr = 16.73;

    //ptr = &(Any variable) would cause error because our pointer is consant and so address stored inside it!!!
    std::cout << "Changed value: " << *ptr << std::endl;
    std::cout << "Address of the variable: " << ptr << std::endl;
    std::cout << "Pointer's address: " << &ptr << std::endl;

    return 0;
}