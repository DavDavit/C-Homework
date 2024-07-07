#include <iostream>

int main() {
    const int size = 100;
    char arr[size] = "Reading books and periodically hanging out with friends is always awesome!!!";
    char* ptr = &arr[0];

    int wordCount = 0;
    bool inWord = false;

    while(*ptr != '\0') {
        if(*ptr != ' ' && !inWord) {
            inWord = true;
            wordCount++;
        } else if(*ptr == ' ') {
            inWord = false;
        }
        ptr++;
    }

    std::cout << "Number of words within the string is " << wordCount << std::endl;

    return 0;
}
