#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = {0};
    int* ptr = &arr[0];
    int num = 0;
    bool found = false;

    std::cout << "Enter " << size << " integer numbers: ";
    for(int i = 0; i < size; ++i) {
        std::cin >> *(ptr + i);
    }

    std::cout << "Enter the number to search within the inserted array: ";
    std::cin >> num;

    for(int i = 0; i < size; ++i) {
        if(*(ptr + i) == num) {
            found = true;
            break;
        }
    }

    if(found) {
        std::cout << "Yes, " << num << " is in the array!" << std::endl;
    } else {
        std::cout << "No, " << num << " is NOT in the array..." << std::endl;
    }

    return 0;
}
