#include <iostream>

void displayOperations() {
    std::cout << "Select one of the following operations:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "Enter your choice (1-4): ";
}

int main() {
    int choice;
    int num1, num2, result;

    displayOperations();
    std::cin >> choice;

    if(choice < 1 || choice > 4) {
        std::cout << "Invalid selection! Enter the valid number for one of the operations." << std::endl;
        return 1;
    }

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if(choice == 1) {
        result = num1 + num2;
        std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
    } else if(choice == 2) {
        result = num1 - num2;
        std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
    } else if(choice == 3) {
        result = num1 * num2;
        std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
    } else if(choice == 4) {
        if(num2 != 0) {
            result = num1 / num2;
            std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
        } else {
            std::cout << "Division by zero is impossible." << std::endl;
        }
    }

    return 0;
}