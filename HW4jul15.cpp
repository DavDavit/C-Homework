#include <iostream>

void printArray(int* arr, int size, int index = 0) {
    if(index == size) {
        return;
    }

    std::cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int size = 0;

    std::cout << "Enter the size of an array: ";
    std::cin >> size;

    if(size <= 0) {
        std::cout << "Invalid array size..." << std::endl;
        return 1;
    }

    int* arr = new int[size];

    std::cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array elements are ";
    printArray(arr, size);
    std::cout << std::endl;

    delete[] arr;
    arr = nullptr;
    
    return 0;
}