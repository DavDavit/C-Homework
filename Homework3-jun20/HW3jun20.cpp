#include <iostream>

int main() {
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Squares of numbers from 0 to " << n << " are:" << std::endl;

    if(n >= 0) {
        for(int i = 0; i <= n; ++i) {
            std::cout << i << "^2 = " << i * i << std::endl;
        }
    } else {
        for(int i = 0; i >= n; --i) {
            std::cout << i << "^2 = " << i * i << std::endl;
        }
    }

    return 0;
}
