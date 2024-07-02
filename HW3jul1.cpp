#include <iostream> 

int main() {
    char a = 'S';
    const char *ptr = &a;

    //*ptr = O would result in an error since we have the pointer to the constant character!!
    std::cout << *ptr << std::endl;

    return 0;
}