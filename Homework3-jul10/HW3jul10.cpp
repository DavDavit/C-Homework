#include <iostream>

char* my_strcat(char* dest, const char* src) {
    char* originalDest = dest;

    while(*dest != '\0') {
        dest++;
    }

    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; //Just in case!!
   
    return originalDest;
}

int main() {
    const int maxSize = 100;
    char str1[maxSize] = {0};
    char str2[maxSize] = {0};
    char* ptr1 = &str1[0];
    char* ptr2 = &str2[0];

    std::cout << "Enter the first string: ";
    std::cin >> ptr1;

    std::cout << "Enter the second string: ";
    std::cin >> ptr2;

    my_strcat(str1, str2);
    std::cout << "Concatenated string: " << str1 << std::endl;

    return 0;
}
