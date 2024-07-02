#include <iostream>

int main() {
    int size = 10;
    int arr[size];

    std::cout << "Enter " << size << " elements:" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int count = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] < 14) {
            ++count;
        }
    }

    std::cout << "The number of elements lower than 14 is: " << count << std::endl;

    return 0;
}
