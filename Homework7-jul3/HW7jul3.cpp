#include <iostream>

int main() {
    const int size1 = 100;
    const int size2 = 65;
    char arr1[size1] = "Hello";
    char arr2[size2] = "World";
    char* ptr1 = &arr1[0];
    char* ptr2 = &arr2[0];

    while(*ptr1 != '\0') {
        ++ptr1;
    }

    while(*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ++ptr1;
        ++ptr2;
    }

    std::cout << "Unified string: " << arr1 << std::endl;

    return 0;
}
