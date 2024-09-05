// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>

int main() {
    int i = 0;
    while(i < 26) {
        std::cout << char('a' + i) << '\t' << 97 + i << '\n';
        ++i;
    }
}