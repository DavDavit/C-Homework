#include <iostream>

int main() {
    const int size = 10;
    int arr[size] = {0};
    int* ptr = &arr[0];

    std::cout << "Enter " << size << " integer elements: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> *(ptr + i);
    }

    int max1 = *(ptr + 0);
    int max2 = *(ptr + 1);
    for(int i = 1; i < size; ++i) {
        if(*(ptr + i) > max1) {
            max2 = max1;
            max1 = *(ptr + i);
        } else if(*(ptr + i) > max2 && *(ptr + i) < max1) {
            max2 = *(ptr + i);
        }
    }

    std::cout << "The second maximum number: " << max2 << std::endl;

    return 0;
}
