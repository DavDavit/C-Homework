#include <iostream>

int main() {
    const int size = 40;
    char arr[size] = {0};
    char* ptr = &arr[0];

    std::cout << "Insert a string: ";
    std::cin >> ptr;

    std::cout << "Modified string which prints every second element: ";
    while(*ptr != '\0') {
        ptr++;
        std::cout << *ptr;
        ptr++;
    }

    std::cout << std::endl;

    return 0;
}