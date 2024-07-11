#include <iostream>

const char* my_strchr(const char* str, char c) {
    while(*str != '\0') {
        if(*str == c) {
            return str;
        }
        str++;
    }
    return nullptr;
}

int main() {
    const int size = 100;
    char str[size] = {0};
    char* ptr = &str[0];
    char c = '0';

    std::cout << "Enter a string: ";
    std::cin >> ptr;

    std::cout << "Enter a character in order to retrieve its address: ";
    std::cin >> c;

    const char* ptr2 = my_strchr(str, c);

    if(ptr2 != nullptr) {
        std::cout << "The position of the provided character " << c << " is " << (ptr2 - ptr) << std::endl;
        std::cout << "The address of the provided character " << c << " is " << static_cast<const void*>(ptr2) << std::endl;
    } else {
        std::cout << "The character " << c << " could NOT be found:*(" << std::endl;
    }

    return 0;
}
