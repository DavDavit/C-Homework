#include <iostream>

int main() {
    int a = 25;
    int b = 5;
    int* ptra = &a;
    int* ptrb = &b;

    std::cout << "Addition: " << *ptra + *ptrb << std::endl;
    std::cout << "Multiplication: " << *ptra * *ptrb << std::endl;
    std::cout << "Subtraction: " << *ptra - *ptrb << std::endl;

    return 0;
}
