#include <iostream>

int main() {
    const int size = 10;
    int arr[size] = {0};
    int* ptr = &arr[0];

    std::cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> *(ptr + i);
    }

    int min = *ptr;
    for(int i = 0; i < size; ++i) {
        if(*(ptr + i) < min) {
            min = *(ptr + i); 
        }
    }

    int max = *ptr;
    for(int i = 0; i < size; ++i) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    
    int add = min + max;
    std::cout << "The addition of the maximum and minimum elements is " << add << std::endl;

    return 0;
}