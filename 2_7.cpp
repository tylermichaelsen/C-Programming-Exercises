// Output strings alphabetically

#include <iostream>

int main() {
    std::cout << "Enter three names seperated by a space: ";
    std::string s0, s1, s2;
    std::cin >> s0 >> s1 >> s2;

    // Check if its already sorted alphabetically
    if(s0 < s1 && s1 < s2)
        std::cout << s0 << ", " << s1 << ", " << s2;

    // Create first, second, and last strings
    std::string first, second, last;
}