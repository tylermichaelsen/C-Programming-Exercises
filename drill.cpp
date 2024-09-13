// This gets updated to the latest drill I've worked on

#include <iostream>
#include <vector>

constexpr double INCH_CENTI = 2.54;

int main() {
    // Create a global variable for sum
    double sum = 0;
    int counter = 0;
    double largest = 0, smallest = 0;

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
            convertedNumber = ((convertedNumber * 12) * INCH_CENTI) / 100;
        else if(unit == "m")
            ;
        else {
            std::cout << "Not a valid unit.\n";
            continue;
        }
        // Increment counter
        ++counter;

        // Add the number given to the sum
        sum += convertedNumber;
    
        // Find largest and smallest number given
        
        if(number < smallest)
            smallest = number;
        else if(number > largest)
            largest = number;

       
    }

    // Output the smallest, largest, number of values, and the sum
    std::cout 
        << "The smallest value is: " << smallest << '\n'
        << "The largest value is: " << largest << '\n'
        << "Number of values entered: " << counter << '\n'
        << "Sum of values entered: " << sum << "m" << '\n';
        
}