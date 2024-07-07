#include <iostream>

int main() {
    const int size = 40;
    char arr[size] = {0};
    char* ptr = &arr[0];

    std::cout << "Insert characters for the array: ";
    std::cin >> ptr;

    //This was for loop!!
    //for(int i = 0; *(ptr + i) != '\0'; ++i) {
        //std::cout << *(ptr + i);
    //}
    
    //This is while loop!
    std::cout << "Inserted string(array of characters): ";
    while(*ptr != '\0') {
        std::cout << *ptr;
        ptr++;
    }

    std::cout << std::endl;

    return 0;
}