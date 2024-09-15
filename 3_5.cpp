// Number guessing game

#include <iostream>
#include <vector>

void reduceGuess(std::vector<int> g, int size) {
    
}

int main() {
    std::vector<int> guess;
    for(int i = 1; i <= 100; i++) 
        guess.push_back(i);

    char answer = 'a';
    std::cout << "Think of a number between 1 and 100, and then answer the following questions by writing a 'y' for yes or a 'n' for no.\n\n";

    

    while(guess.size() > 5) {

        std::cout << "Is your number less than " << guess.size() / 2 << "? ";
        std::cin >> answer;

        switch(answer) {
            case 'y':
                
                break;
            case 'n': 
                
                break;
            default:
                std::cout << "Not a valid answer.\n";
                break;
        }

        
    }
    

    for(int num : guess) {
        std::cout << num;
    }
}