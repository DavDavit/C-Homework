#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    std::cout << "Enter " << size << " elements:" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int sumofEvenIndices = 0;
    for(int i = 0; i < size; i += 2) {
        sumofEvenIndices += arr[i];
    }

    std::cout << "Sum of elements with even indices is: " << sumofEvenIndices << std::endl;

    return 0;
}