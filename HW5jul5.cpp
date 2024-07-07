#include <iostream>

void printHighestDigit(int number) {
    if(number < 0) {
        number = -number;
    }

    int highestDigit = 0;

    while(number > 0) {
        int digit = number % 10;
        if(digit > highestDigit) {
            highestDigit = digit;
        }
        number /= 10;
    }

    std::cout << "Highest digit within the inserted number is " << highestDigit << std::endl;
}

int main() {
    int number = 0;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    printHighestDigit(number);

    return 0;
}