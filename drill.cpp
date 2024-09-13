// This gets updated to the latest drill I've worked on

#include <iostream>
#include <vector>

constexpr double INCH_CENTI = 2.54;

int main() {
    std::string unit;
    for(double number; std::cin>>number>>unit;) {
        std::cout << number << unit << '\n';

        double largest, smallest;
        if(number < smallest) {
            smallest = number;
            std::cout << "smallest number so far\n";
        }

        if(number > largest) {
            largest = number;
            std::cout << "largest number so far\n";
        }


        if(unit == "m") 
            std::cout << number * 100 << " cm" << '\n';
        

        if(unit == "cm") 
            std::cout << number / 100 << " m" << '\n';
        

        if(unit == "in")
            std::cout << (number * INCH_CENTI) * 100 << " m" << '\n';

        if(unit == "ft")
            std::cout << ((number * 12) * INCH_CENTI) / 100 << " m" << '\n';
    }
        
}