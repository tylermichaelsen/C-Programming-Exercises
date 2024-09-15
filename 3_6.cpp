// Simple calculator

#include <iostream>

int main() {
    double num1 = 0, num2 = 0;
    char operation = ' ';

    std::cout << "Please enter 2 numbers followed by an operator character: ";

    while(std::cin>>num1>>num2>>operation) {

        switch(operation) {
            case '+':
                std::cout << num1 << " + " << num2 << " = " << num1+num2 << '\n';
                break;
            case '-':
                std::cout << num1 << " - " << num2 << " = " << num1-num2 << '\n';
                break;
            case '*':
                std::cout << num1 << " * " << num2 << " = " << num1*num2 << '\n';
                break;
            case '/':
                std::cout << num1 << " / " << num2 << " = " << num1/num2 << '\n';
                break;
            default:
                std::cout << "Not a valid operation character.\n";
                break;
        }
    }
}