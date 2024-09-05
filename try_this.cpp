// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>

int main() {
    // Print digits
    for(int i = int('0'); i <= int('9'); ++i) {
        std::cout << char(i) << '\t' << i << '\n';
    }

    // Print Uppercase letters
    for(int i = int('A'); i <= int('Z'); ++i) {
        std::cout << char(i) << '\t' << i << '\n';
    }

    /*for(int i = 0; i < 123; ++i) {
        std::cout << char(i) << '\t' << i << '\n';
    } */
}