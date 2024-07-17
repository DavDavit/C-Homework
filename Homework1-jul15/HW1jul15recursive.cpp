#include <iostream>

unsigned long long factorial(int num) {
    if(num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
} 

int main() {
    int number = 0;
    std::cout << "Enter a positive integer to calculate its factorial: ";
    std::cin >> number;

    if(number < 0) {
        std::cout << "Can NOT calculate the factorial of the given number since it's negative..." << std::endl;
    } else {
        unsigned long long result = factorial(number);
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    }

    return 0;
}
