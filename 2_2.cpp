// Convert miles to kilometers

#include <iostream>

int main() {
    double miles = 0;
    double kilometers = 0;

    std::cout << "Please enter the number of miles to be converted: ";
    std::cin >> miles;
    kilometers = miles * 1.609; // 1 mile = 1.609 km
    std::cout << miles << " miles is " << kilometers << " kilometers.";
}