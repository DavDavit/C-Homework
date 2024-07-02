#include <iostream>

int main() {
    const int size = 7;
    int arr[size] = {0};
    int* ptr = &arr[0];

    std::cout << "Insert "<< size << " integer elements of the array: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> *(ptr + i);
    }

    int min = *ptr;
    for(int i = 0; i < size; ++i) {
        if(*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    std::cout << "Minimum number within the array is " << min << std::endl;

    return 0;
}