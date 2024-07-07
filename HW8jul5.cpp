#include <iostream>

int fibonacci(int n) {
    if(n <= 0) {
        return -1;
    } else if(n == 1) {
        return 0;
    } else if(n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 0;
    std::cout << "Enter a positon for a desired fibonacci element: ";
    std::cin >> n;

    if(n <= 0) {
        std::cout << "Invalid input. Enter a positive integer!!";
        return 1;
    }

    int fibonacciNumber = fibonacci(n);

    std::cout << "Number from the Fibonacci sequence at the position " << n << " is " << fibonacciNumber << std::endl;

    return 0;
}