#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num % 2 == 0) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}