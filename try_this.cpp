// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>
#include <vector>

// Bleep unwanted input

int main() {
    std::vector<std::string> words; 

    for (std::string word; std::cin>>word; ) 
        words.push_back(word);

}