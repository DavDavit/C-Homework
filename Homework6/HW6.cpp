#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num > 0) {
        std::cout << "The inserted number is positive.";
    } 
    else if(num < 0) {
        std::cout << "The inserted number is negative.";
    }
    else {
        std::cout << "The inserted number is neither negative nor positive.";
    }

    return 0;
}
