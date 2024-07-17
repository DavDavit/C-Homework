#include <iostream>

int countOccurences(int* arr, int size, int element, int index = 0) {
    if(index == size) {
        return 0;
    }

    if(arr[index] == element) {
        return 1 + countOccurences(arr, size, element, index + 1);
    } else {
        return countOccurences(arr, size, element, index + 1);
    }
}

int main() {
    int size = 0;
    int element = 0;

    std::cout << "Enter the size of an array: ";
    std::cin >> size;

    if(size <= 0) {
        std::cout << "Invalid array size..." << std::endl;
        return 1;
    }

    int* arr = new int[size];

    std::cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the element of the array in order to count its occurences within the array: ";
    std::cin >> element;

    int count = countOccurences(arr, size, element);
    std::cout << "The element " << element << " appears " << count << " time(s)." << std::endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}
