#include <iostream>

int my_strlen(const char* str) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const int maxSize = 100;
    char str[maxSize] = {0};
    char* ptr = &str[0];

    std::cout << "Enter a string: ";
    std::cin >> ptr;

    int result = my_strlen(str);
    std::cout << "The lenght of the string is " << result << std::endl;

    return 0;
}