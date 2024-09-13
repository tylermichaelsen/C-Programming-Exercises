// This gets updated to the latest drill I've worked on

#include <iostream>
#include <vector>

constexpr double INCH_CENTI = 2.54;

int main() {
    // Create a global variable for sum
    double sum;

    std::string unit;
    for(double number; std::cin>>number>>unit;) {

        // Create seperate variable to store converted length
        double convertedNumber = number;

        // Unit test
        if(unit == "cm") 
            convertedNumber /= 100;
        else if(unit == "in")
            convertedNumber = (convertedNumber * INCH_CENTI) / 100;
        else if(unit == "ft")
            convertedNumber = ((convertedNumber * 12) * INCH_CENTI) / 100 ;
        else {
            std::cout << "Not a valid unit.\n";
            continue;
        }
        // Outout number and unit
        std::cout << number << unit << '\n';

        // Add the number given to the sum
        if(unit == "m")
            sum += number;
        else
            sum += convertedNumber;
    
        // Find largest and smallest number given
        double largest, smallest;
        if(number < smallest)
            smallest = number;
        else if(number > largest)
            largest = number;

       
    }
        
}