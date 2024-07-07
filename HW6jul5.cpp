#include <iostream>

void printArray(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 0;
    
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Corresponding elements of the array: ";
    printArray(arr, size);

    delete[] arr;
    arr = nullptr;
    
    return 0;
}