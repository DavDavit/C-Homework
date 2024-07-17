#include <iostream>

int findMax(int* arr, int size, int index = 0) {
    if(index == size - 1) {
        return arr[index];
    }

    int maxOfRest = findMax(arr, size, index + 1);

    if(arr[index] > maxOfRest) {
        return arr[index];
    } else {
        return maxOfRest;
    }
}

int main() {
    int size = 0;
    std::cout << "Enter the size of an array: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int maxElement = findMax(arr, size);
    std::cout << "The maximum element within the array is " << maxElement << std::endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}
