#include <iostream>

int main() {
    const int size = 50;
    char arr[size] = {0};
    char sym = '0';
    char* ptr1 = &arr[0];
    char* ptr2 = &sym;
    
    std::cout << "Insert a string: ";
    std::cin >> ptr1;

    std::cout << "Insert a symbol: ";
    std::cin >> *ptr2;

    int count = 0;
    while(*ptr1 != '\0') {
        if(*ptr1 == *ptr2) {
            ++count;
        }
        ++ptr1;
    }

    if(count == 0) {
        std::cout << "String does NOT contain the inserted symbol...";
    } else {
        std::cout << "Number of encountered certain symbols: " << count;
    }

    std::cout << std::endl;

    return 0;
}