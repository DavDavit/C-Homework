#include <iostream>

int main() {
    int num;

    std::cout << "Insert a number: ";
    std::cin >> num;

    if(num % 5 == 0) {
        std::cout << "A";
    }
    else if (num % 7 == 0) {
        std::cout << "B";
    }
    else {
        std::cout << "C";
    }

    return 0;
}