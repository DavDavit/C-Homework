#include <iostream>

int power(int num, int exp) {
    int result = 1;

    for(int i = 0; i < exp; ++i) {
        result *= num;
    }

    return result;
}

int main() {
    int num = 0;
    std::cout << "Insert an integer(base): ";
    std::cin >> num;

    int exp = 0;
    std::cout << "Insert an exponent: ";
    std::cin >> exp;

    int result = power(num, exp);
    std::cout << num << " raised to the power of " << exp << " is " << result << std::endl;

    return 0;
}