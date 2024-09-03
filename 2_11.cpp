// Coin counter

#include <iostream>

int main() {
    // Create variables for each type of coin
    double pennies, nickels, dimes, quarters, halfDollars;

    // Ask and store pennies
    std::cout << "How many pennies do you have?\n";
    std::cin >> pennies;

    // Ask and store nickels
    std::cout << "How many nickels do you have?\n";
    std::cin >> nickels;
    
    // Ask and store dimes
    std::cout << "How many dimes do you have?\n";
    std::cin >> dimes;

    // Ask and store quarters
    std::cout << "How many quarters do you have?\n";
    std::cin >> quarters;

    // Ask and store half dollars
    std::cout << "How many half dollars do you have?\n";
    std::cin >> halfDollars;

    // Output the count of coins
    if(pennies==1)
        std::cout << "You have 1 penny.\n";
    else
        std::cout << "You have " << pennies << " pennies.\n";

    if(nickels==1)
        std::cout << "You have 1 nickel.\n";
    else
        std::cout << "You have " << nickels << " nickels.\n";
    
    if(dimes==1)
        std::cout << "You have 1 dime.\n";
    else
        std::cout << "You have " << dimes << " dimes.\n";
    
    if(quarters==1)
        std::cout << "You have 1 quarter.\n";
    else
        std::cout << "You have " << quarters << " quarters.\n";

    if(halfDollars==1)
        std::cout << "You have 1 half dollar.\n";
    else
        std::cout << "You have " << halfDollars << " half dollars.\n";

    // Create total amount variable
    double total = (pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfDollars * 50)) / 100;

    // Output the toal amount of money in dollars
    std::cout << "The value of all your coins is $" << total << ".";
}