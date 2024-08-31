// Output sequential integers

#include <iostream>

int main() {
    std::cout << "Please enter three integer numbers (seperated by spaces): ";

    int n0 = 0, n1 = 0, n2 = 0;

    std::cin >> n0 >> n1 >> n2;

    // Find first number of sequence and output it
    if(n0 > n1 && n0 > n2)
        std::cout << n0 << ", ";
    if(n1 > n0 && n1 > n2)
        std::cout << n1 << ", ";
    if(n2 > n0 && n2 > n1)
        std::cout << n2 << ", ";

    // Find second number of sequence and output it
    if(n0 < n1 && n0 > n2 || n0 > n1 && n0 < n2)
        std::cout << n0 << ", ";
    if(n1 < n0 && n1 > n2 || n1 > n0 && n1 < n2)
        std::cout << n1 << ", ";
    if(n2 < n0 && n2 > n1 || n2 > n0 && n2 < n1)
        std::cout << n2 << ", ";
}