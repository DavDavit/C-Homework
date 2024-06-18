#include <iostream>

int main() {
    int age;

    std::cout << "Enter a person's age: ";
    std::cin >> age;

    int year = 2024 - age;

    std::cout << "The person was born in: " << year << std::endl;

    return 0;
}