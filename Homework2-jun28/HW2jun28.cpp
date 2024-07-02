#include <iostream>

int main() {
    int num1 = 23;
    int num2 = 97;
    const int num3 = 35;

    int* const ptr1 = &num1;
    //ptr1 = &num2; This is NOT allowed since ptr1 is constant as a pointer!!
    *ptr1 = 15; //This is allowed since constant pointer points to a non-constant integer value.

    const int* ptr2 = &num3;
    //*ptr2 = 33; This is NOT allowed and compile-time error will occur since a pointer point to constant variable!!!
    ptr2 = &num2; //Allowed because pointer is not constant and it can be assigned to different memory addresses of 
    //both constant and non-constant variables!!

    std::cout << "Value pointed by ptr1 and its address: " << *ptr1 << " " << ptr1 << std::endl;
    std::cout << "Value pointed by ptr2 and its address: " << *ptr2 << " " << ptr2 << std::endl;

    return 0;
}
