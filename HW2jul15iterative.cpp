#include <iostream>

void printNumbers(int num) {
    if(num < 0) {
        for(int i = num; i <= 0; ++i) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        for(int i = num; i >= 0; --i) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int number = 0;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::cout << "Count starting from " << number << " up to 0: ";
    printNumbers(number);

    return 0;
}