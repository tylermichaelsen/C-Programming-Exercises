// Coin counter

#include <iostream>

int main() {
    // Create variables for each type of coin
    int pennies, nickels, dimes, quarters, halfDollars;

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

    // Create total amount variable
    double total = 0;

    // Output the count of coins
    if(pennies==1)
        std::cout << "You have 1 penny.\n";
    else
        std::cout << "You have " << pennies << " pennies.\n";
        
    if(nickels==1)
        std::cout << "You have 1 nickel.\n";
    else
        std::cout << "You have " << nickels << " nickels.\n";
    
}