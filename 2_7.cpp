// Output sequential strings

#include <iostream>

int main() {
    std::cout << "Please enter three names (seperated by spaces): ";

    std::string n0, n1, n2;

    std::cin >> n0 >> n1 >> n2;

    // Find first name of sequence and output it
    if(n0 > n1 && n0 > n2)
        std::cout << n0 << ", ";
    if(n1 > n0 && n1 > n2)
        std::cout << n1 << ", ";
    if(n2 > n0 && n2 > n1)
        std::cout << n2 << ", ";

    // Find second name of sequence and output it
    if(n0 < n1 && n0 > n2 || n0 > n1 && n0 < n2)
        std::cout << n0 << ", ";
    if(n1 < n0 && n1 > n2 || n1 > n0 && n1 < n2)
        std::cout << n1 << ", ";
    if(n2 < n0 && n2 > n1 || n2 > n0 && n2 < n1)
        std::cout << n2 << ", ";
    
    // Find third name of sequence and output it
    if(n0 < n1 && n0 < n2)
        std::cout << n0;
    if(n1 < n0 && n1 < n2)
        std::cout << n1;
    if(n2 < n0 && n2 < n1)
        std::cout << n2;
}