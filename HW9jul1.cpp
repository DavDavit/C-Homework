#include <iostream>

int main() {
    const int size = 5;
    int arr1[size] = {0};
    int arr2[size] = {0};
    int result[size] = {0};
    int* ptr1 = &arr1[0];
    int* ptr2 = &arr2[0];
    int* ptr3 = &result[0];

    std::cout << "Enter " << size << " integer elements for the first array: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> *(ptr1 + i);
    }

    std::cout << "Enter " << size << " integer elements for the second array: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> *(ptr2 + i);
    }

    for(int i = 0; i < size; ++i) {
        *(ptr3 + i) = *(ptr1 + i) * *(ptr2 + i);
    }

    std::cout << "Multiplication between the elements with the same indices: " << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cout << "Index " << i << ": " << *(ptr1 + i) << " * " << *(ptr2 + i) << " = " << *(ptr3 + i) << std::endl;
    }

    return 0;
}