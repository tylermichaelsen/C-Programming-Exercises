// Write a program that reads a string from input and then, for each character read, prints out the character and its integer value on a line.

#include <iostream>

int main() {
    for(std::string input; std::cin>>input;) {
        for(char character : input) {
            std::cout << character << '\t' << int(character) << '\n';
        }
    }
}