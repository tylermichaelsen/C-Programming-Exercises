// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>

int main() {
    for(int i = 0; i < 26; ++i) {
        std::cout << char('a' + i) << '\t' << int('a' + i) << '\n';
    }
}