#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    std::cout << "Enter " << size << " elements:" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Elements in the reverse order: ";
    for(int i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}