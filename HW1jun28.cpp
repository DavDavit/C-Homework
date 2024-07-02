#include <iostream>

int main() {
    int arr[] = {1, 2, 5, 23, 97, 77};
    int* ptr = arr;
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements: ";
    for(int i = 0; i < size; ++i) {
        std::cout << *(ptr + i) << " ";
        sum += *(ptr + i);
    }

    std::cout << "\nSum of all the elements within the array: " << sum << std::endl;

    return 0; 
}