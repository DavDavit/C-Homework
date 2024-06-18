#include <iostream>

int main() {
    int x;

    std::cout << "Enter an integer: ";
    std::cin >> x;

    int result = (x * x + (x - 34) / 5) % 2;

    std::cout << "The corresponding result is: " << result << std::endl;

    return 0;
}
