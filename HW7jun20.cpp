#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    std::cout << "Enter " << size << " elements:" << std::endl;
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int sum = 0;
    int positiveCount = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] > 0) {
            sum += arr[i];
            positiveCount++;
        }
    }

    int arithmeticMean;
    if(positiveCount > 0) {
        arithmeticMean = sum / positiveCount;
        std::cout << "The arithmetic mean of positive numbers is: " << arithmeticMean << std::endl;
    } else {
        std::cout << "There are no positive numbers within the array! Arithmetic mean is 0." << std::endl;
    }

    return 0;
}