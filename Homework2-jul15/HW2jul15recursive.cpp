#include <iostream>

void printNumbers(int num) {
    if(num <= 0) {
        std::cout << num << " ";
        if(num < 0) {
            printNumbers(num + 1);
        }
        return;
    } else if(num >= 0) {
        std::cout << num << " ";
        if(num > 0) {
            printNumbers(num - 1);
        }
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
