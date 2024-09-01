// Odd or even

#include <iostream>

int main(){
    // Prompt the user to enter a number
    std::cout << "Please enter a number to figure out if it is even or odd: ";

    // Create an integer variable and store the users input in it
    int number = 0;
    std::cin >> number;

    // Check if the number is odd, print result
    if(number%2 != 0) 
        std::cout << "The value " << number << " is an odd number.";
    else
        std::cout << "The value " << number << " is an even number.";
}