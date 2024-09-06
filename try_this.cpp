// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>
#include <vector>

// Bleep unwanted input

int main() {

    std::vector<std::string> disliked = {"Broccoli", "think", "bright"};

    std::vector<std::string> words; 

    for (std::string word; std::cin>>word; ) 
        words.push_back(word);

    for(int i = 0; i<words.size(); ++i) {
        for(int j = 0; j<disliked.size(); ++j) {
            if(words[i] == disliked[j]) {
                words[i] = "BLEEP";
            }
        }
        std::cout << words[i] << '\n';
    }
}