#include <iostream>

bool isPrime(int number) {
    if(number <= 1) {
        return false;
    }

    for(int i = 2; i <= number / 2; ++i) {
        if(number % i == 0) {
            return false;
        }
    }

    return true;
}

bool sumOfPrimes(int number) {
    for(int i = 2; i <= number; ++i) {
        if(isPrime(i) && isPrime(number - i)) {
            return true;
        }
    }

    return false;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if(sumOfPrimes(number)) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
