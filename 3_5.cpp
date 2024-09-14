// Number guessing game

#include <iostream>

int main() {
    int guess = 0;
    char answer = 'a';
    std::cout << "Think of a number between 1 and 100, and then answer the following questions by writing a 'y' for yes or a 'n' for no.\n\n";

    std::cout << "Is your number less than 50? ";
    std::cin >> answer;

    if(answer == 'y') {}
}