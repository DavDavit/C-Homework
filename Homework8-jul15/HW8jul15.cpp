#include <iostream> 

int stringLength(const char* str) {
    if(*str == '\0') {
        return 0;
    }

    return 1 + stringLength(str + 1);
}

bool isPalindrome(const char* str, int size) {
    if(size <= 1) {
        return true;
    }

    if(str[0] != str[size - 1]) {
        return false;
    }

    return isPalindrome(str + 1, size - 2);
}

int main() {
    int maxSize = 100;
    char str[maxSize] = {0};
    char* ptr = &str[0];

    std::cout << "Enter the characters of a string: ";
    std::cin.getline(ptr, maxSize);

    int size = stringLength(str);

    if(isPalindrome(str, size)) {
        std::cout << "The given string '" << str << "' is palindrome!!" << std::endl; 
    } else {
        std::cout << "The given string '" << str << "' is NOT palindrome..." << std::endl;
    }

    return 0;
}
