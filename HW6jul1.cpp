#include <iostream>

int main() {
    const int size = 7;
    int arr[size] = {0};
    int* ptr = &arr[0];

    std::cout << "Insert elements: " << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ":";
        std::cin >> *(ptr + i);
    }

    int maxIndex = 0;
    for(int i = 0; i < size; ++i) {
        if(*(ptr + i) > *(ptr + maxIndex)) {
            maxIndex = i;
        }
    }

    std::cout << "The index of the maximum array element: " << maxIndex << std::endl;

    return 0;
}