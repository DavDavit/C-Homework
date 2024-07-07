#include <iostream>

void sumOfDigits(int number) {
    int sum = 0;
    int originalNumber = number;

    if(number < 0) {
        number = -number;
    }

    while(number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    std::cout << "Sum of the digits of " << originalNumber << " is " << sum << std::endl;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    sumOfDigits(number);

    return 0;
}
