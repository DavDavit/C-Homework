#include <iostream>

int main() {
    const int size = 7;
    int arr[size];

    std::cout << "Enter " << size << " integers:" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int oddCount = 0;

    for(int i = 0; i < size; ++i) {
        if(arr[i] % 2 != 0) {
            ++oddCount;
        }
    }

    std::cout << "The number of odd numbers within the array: " << oddCount << std::endl;

    return 0;
}