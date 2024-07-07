#include <iostream>

void printReverse(int* arr, int size) {
    for(int i = size - 1; i >= 0; --i) {
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

    std::cout << "Reversed elements of the array: ";
    printReverse(arr, size);

    delete[] arr;
    arr = nullptr;

    return 0;
}
