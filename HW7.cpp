#include <iostream>

int main() {
    int num;

    std::cout << "Insert a number: ";
    std::cin >> num;

    if(num % 5 == 0) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}