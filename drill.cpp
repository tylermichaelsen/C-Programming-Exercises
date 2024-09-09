// This gets updated to the latest drill I've worked on

#include <iostream>
#include <vector>

int main() {
    double difference;
    for(double number; std::cin>>number;) {
        std::cout << number << '\n';

        double largest, smallest;
        if(number < smallest) {
            smallest = number;
            std::cout << "smallest number so far\n";
        }

        if(number > largest) {
            largest = number;
            std::cout << "largest number so far\n";
        }

    }
        
}