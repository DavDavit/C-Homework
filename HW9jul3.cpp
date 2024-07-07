#include <iostream>

int main() {
    const int size1 = 75;
    const int size2 = 85;
    char arr1[size1] = {0};
    char arr2[size2] = {0};
    char* ptr1 = &arr1[0];
    char* ptr2 = &arr2[0];

    std::cout << "Enter the first string: ";
    std::cin >> ptr1;

    std::cout << "Enter the second string: ";
    std::cin >> ptr2;

    while(*ptr1 != '\0') {
        ptr1++;
    }

    while(*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    std::cout << "Concatenated string: " << arr1 << std::endl;

    return 0;
}