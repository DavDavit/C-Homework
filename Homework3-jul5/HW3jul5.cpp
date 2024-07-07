#include <iostream>

int countDigits(int number) {
    if(number == 0) {
        return 1;
    }

    if(number < 0) {
        number = -number;
    }

    int count = 0;
    while(number != 0) {
        number /= 10;
        count++;
    }

    return count;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    int numDigits = countDigits(number);
    std::cout << "Number of digits in " << number << ": " << numDigits << std::endl;

    return 0;
}
