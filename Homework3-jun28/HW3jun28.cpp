#include <iostream>

int main() {
    int size = 7;
    int arr[size] = {0};
    int* ptr = arr;

    std::cout << "Enter 7 integers: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array elements before a modification: ";
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    //Modifying by using array-notation
    arr[0] = 24;
    arr[4] = 99;

    //Modifying by using pointer-notation
    *(ptr + 2) = 78;
    *(ptr + 6) = 101;

    std::cout << "Array elements after the modification: ";
    for(int i = 0; i < size; ++i) {
        std::cout << *(ptr + i) << " ";
    }

    std::cout << std::endl;
    
    return 0;
}
