#include <iostream>

int main() {
    const int size = 40;
    char arr[size] = {0};
    char* ptr = &arr[0];

    std::cout << "Enter characters for the array: ";
    std::cin >> ptr;

    int length = 0;
    while(*ptr != 0) {
        length++;
        ptr++;
    }

    std::cout << "Length of the inserted string(array of characters): " << length << std::endl;

    return 0;
}