#include <iostream>

int main() {
    double var = 20;
    double* ptr = &var;

    std::cout << "The address of the variable is " << ptr << std::endl;
    std::cout << "The value of the variable is " << *ptr << std::endl;

    return 0;
}