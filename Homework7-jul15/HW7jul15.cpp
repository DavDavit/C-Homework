#include <iostream>

int countEven(int* arr, int size, int index = 0) {
    if(index >= size) {
        return 0;
    }

    int currentCount = (arr[index] % 2 == 0) ? 1 : 0;

    return currentCount + countEven(arr, size, index + 1);
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

    std::cout << "Enter the array elements: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int evenCount = countEven(arr, size);
    std::cout << "Number of even numbers within the given array is " << evenCount << std::endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}
