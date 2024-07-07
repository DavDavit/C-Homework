#include <iostream>

int main() {
    const int size = 50;
    char arr[size] = {0};
    char sym = 'o';
    char* ptr = &arr[0];
    int flag = 0;

    std::cout << "Enter characters of the array: ";
    std::cin >> ptr;

    std::cout << "Enter a character to start a substring: ";
    std::cin >> sym;

    while(*ptr != '\0') {
        if(*ptr == sym) {
            flag = 1;
            std::cout << "String startimg from the specified character: " << ptr;
            break;
        } 
            ptr++;
        }

    if(!flag) {
        std::cout << "No such character within the inserted string..."; 
    }
    
    std::cout << std::endl;

    return 0;
}
