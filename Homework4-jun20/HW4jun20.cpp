#include <iostream>

int main() {
    const int size = 7;
    int arr[size];

    std::cout << "Enter " << size << " integers:" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int product = 1;

    for(int i = 0; i < size; ++i) {
        product *= arr[i];
    }

    std::cout << "The product of all the elements: " << product << std::endl;

    return 0;
}
