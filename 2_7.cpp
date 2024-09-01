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

    // Find the first string in sequence
    if(s0 < s1 && s0 < s2)
        first = s0;
    if(s1 < s0 && s1 < s2)
        first = s1;
    if(s2 < s0 && s2 < s1)
        first = s2;

    // Find the second string in sequence
    if(s0 < s1 && s0 > s2 || s0 > s1 && s0 < s2)
        second = s0;
    if(s1 < s0 && s1 > s2 || s1 > s0 && s1 < s2)
        second = s1;
    if(s2 < s1 && s2 > s1 || s2 > s1 && s2 < s1)
        second = s2;

    // Find the last string in sequence
     if(s0 > s1 && s0 > s2)
        last = s0;
    if(s1 > s0 && s1 > s2)
        last = s1;
    if(s2 > s0 && s2 > s1)
        last = s2;

    // Output final sequence
    std::cout << first << ", " << second << ", " << last;
}