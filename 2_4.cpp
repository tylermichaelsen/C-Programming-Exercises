// Number comparison

#include <iostream>

int main() {
    int val1 = 0, val2 = 0;
    std::cout << "Please enter two integer numbers seperated by a space: ";
    std::cin >> val1 >> val2;

    // Find the larger number
    if(val1 > val2)
        std::cout << val1 << " is larger than " << val2 << '\n';
    if(val2 > val1)
        std::cout << val2 << " is larger than " << val1 << '\n';

    // Find the smaller number
    if(val1 < val2)
        std::cout << val1 << " is less than " << val2 << '\n';
    if(val2 < val1)
        std::cout << val2 << " is less than " << val1 << '\n';

}