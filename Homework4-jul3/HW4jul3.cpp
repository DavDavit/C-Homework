#include <iostream>

int main() {
    const int size = 65;
    char arr[size] = {0};
    char* ptr = &arr[0];

    std::cout << "Insert a string: ";
    std::cin >> ptr;

    std::cout << "Special symbols within the string: ";
    while(*ptr != '\0') {
        if(!(*ptr >= 'A' && *ptr <='Z') && !(*ptr >= 'a' && *ptr <= 'z') && !(*ptr >= '0' && *ptr <= '9')) {
            std::cout << *ptr;
        }
        ptr++;
    }

    std::cout << std::endl;

    return 0;
}
