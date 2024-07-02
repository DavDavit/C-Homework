#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    std::cout << "Enter " << size << " elements:" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int count = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] > 5 && arr[i] < 10) {
            ++count;
        }
    }

    std::cout << "The number of elements greater than 5 and lower than 10 is: " << count << std::endl;

    return 0;
}
