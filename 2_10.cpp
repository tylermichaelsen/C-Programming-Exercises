// Triple argument calculator

#include <iostream>

int main() {
    // Create input variables
    std::string operation;
    double num1 = 0, num2 = 0;

    // Prompt the user
    std::cout << "Please enter an operation sign followed by 2 numbers: ";

    // Receive input and store it into corresponding variables
    std::cin >> operation >> num1 >> num2;

     // Addition
    if(operation=="+" || operation=="plus")
        std::cout << num1 + num2;
    
    // Subtraction
    if(operation=="-" || operation=="minus")
        std::cout << num1 - num2;
    
    // Multiplication
    if(operation=="*" || operation=="mul")
        std::cout << num1 * num2;
}