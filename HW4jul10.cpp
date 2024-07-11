#include <iostream>

char* my_strcpy(char* dest, const char* src) {
    char* originalDest = dest;

    while(*src != 0) {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return originalDest;
}

int main() {
    const int maxSize = 100;
    char dest[maxSize] = {0};
    char src[maxSize] = {0};
    char* ptr1 = &dest[0];
    char* ptr2 = &src[0];

    std::cout << "Enter the first string: ";
    std::cin >> ptr1;

    std::cout << "Enter the second string: ";
    std::cin >> ptr2;

    my_strcpy(dest, src);
    std::cout << "The content of the second string copied into the first string: " << dest << std::endl;

    return 0;
}