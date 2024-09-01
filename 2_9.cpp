// Word to number conversion

#include <iostream>

int main() {
    // Prompt the user to give us a number in the form of a word
    std::cout << "Please spell out a number: ";

    // Create a string variable for users input
    std::string word;
    std::cin >> word;

    // Check what word is and print the result
    if(word == "zero")  // Check for zero
        std::cout << 0;
    else if(word == "one") // Check for one
        std::cout << 1;
    else if(word == "two") // Check for two
        std::cout << 2;
    else if(word == "three") // Check for three
        std::cout << 3;
    else if(word == "four") // Check for four
        std::cout << 4;

}