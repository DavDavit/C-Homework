#include <iostream>

unsigned long long fibonacci(int n) {
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }

    unsigned long long prev = 0, curr = 1, next = 0;

    for(int i = 3; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int number = 0;
    std::cout << "Enter a number to calculate the nth element of the Fibonacci sequence: ";
    std::cin >> number;

    if(number <= 0) {
        std::cout << "Please enter a positive number!!" << std::endl;
    } else {
        unsigned long long result = fibonacci(number);
        std::cout << "Fibonacci number " << number << ": " << result << std::endl; 
    }

    return 0;
}