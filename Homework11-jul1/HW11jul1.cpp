#include <iostream>

int main() {
    const int size = 20;
    char arr[size] = {0};
    int numbers[size] = {0};
    char* ptr1 = &arr[0];
    int* ptr2 = &numbers[0];
    int num_count = 0;

    std::cout << "Insert characters (do NOT exceed " << size - 1 << " characters): ";
    for(int i = 0; i < size - 1; ++i) {
        std::cin.get(*(ptr1 + i));
        if(*(ptr1 + i) == '\n') {
            *(ptr1 + i) = '\0';
            break;
        }
    }

    *(ptr1 + size - 1) = '\0';

    for(int i = 0; *(ptr1 + i) != '\0'; ++i) {
        if(*(ptr1 + i) >= '0' && *(ptr1 + i) <= '9') {
            *(ptr2 + num_count++) = *(ptr1 + i) - '0';
        }
    }

    std::cout << "Retrieved numbers: ";
    for(int i = 0; i < num_count; ++i) {
        std::cout << *(ptr2 + i);
    }

    std::cout << std::endl;

    return 0;
}
