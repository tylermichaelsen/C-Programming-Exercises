// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>
#include <vector>

// Bleep unwanted input

int main() {

    std::string disliked = "Broccoli";

    std::vector<std::string> words; 

    for (std::string word; std::cin>>word; ) 
        words.push_back(word);

    for(int i = 0; i<words.size(); ++i) {
        if(words[i] == disliked) {
            words[i] = "BLEEP";
        }
        std::cout << words[i] << '\n';
    }
}