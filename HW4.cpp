#include <iostream>

int main() {
    int a;
    int b;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    int arMean = (a + b) / 2;

    std::cout << "The corresponding arithemtic mean between the inserted 2 numbers is: " << arMean << std::endl;

    return 0;
}