// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>

int main() {
    constexpr double yen = 144.81;
    constexpr double kroner = 10.71;
    constexpr double pounds = 0.76;

    char currency;
    double money = 0;
    std::cout << "Please enter y k or p and then a number: ";
    std::cin >> currency >> money;

    /* if(currency=='y')
        std::cout << money * yen;
    else if(currency=='k')
        std::cout << money * kroner;
    else if(currency=='p')
        std::cout << money * pounds;
    else 
        std::cout << "Not a valid currency character" */

    switch(currency) {
        case 'y':
            std::cout << money * yen;
            break;
        case 'k':
            std::cout << money * kroner;
            break;
        case 'p':
            std::cout << money * pounds;
            break;
        default:
            std::cout << "Not a valid currency character";
            break;
    }
}