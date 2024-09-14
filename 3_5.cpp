// Number guessing game

#include <iostream>
#include <vector>

int main() {
    std::vector<int> guess;
    for(int i = 1; i <= 100; i++) 
        guess.push_back(i);

    char answer = 'a';
    std::cout << "Think of a number between 1 and 100, and then answer the following questions by writing a 'y' for yes or a 'n' for no.\n\n";

    std::cout << "Is your number less than 50? ";
    std::cin >> answer;

    if(answer == 'y') {}
}