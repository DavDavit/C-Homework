#include <iostream>

const char* my_strstr(const char* haystack, const char* needle) {
    while(*haystack != '\0') {
        const char* ptr1 = haystack;
        const char* ptr2 = needle;

        while(*ptr1 == *ptr2 && *ptr1 != '\0') {
            ptr1++;
            ptr2++;
        }

        if(*ptr2 == '\0') {
            return haystack;
        }

        haystack++;
    }

    return nullptr;
}

int main() {
    const int maxSize = 100;
    char str1[maxSize] = {0};
    char str2[maxSize] = {0};
    char* ptr1 = &str1[0];
    char* ptr2 = &str2[0];

    std::cout << "Enter the first string: ";
    std::cin >> ptr1;

    std::cout << "Enter the second string (substring for the first string): ";
    std::cin >> ptr2;

    const char* result = my_strstr(str1, str2);
    if(result != nullptr) {
        std::cout << "Substring '" << str2 << "' found in the string '" << str1 << "', at the position " << (result - ptr1) << std::endl;
        std::cout << "Address of the beginning of the substring is " << static_cast<const void*>(result) << std::endl;
    } else {
        std::cout << "Substring '" << str2 << "' was NOT found within the string '" << str1 << "'...." << std::endl;
    }

    return 0;
}