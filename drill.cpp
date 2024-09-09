// This gets updated to the latest drill I've worked on

#include <iostream>
#include <vector>

int main() {
    double difference;
    for(double x, y; std::cin>>x>>y;) {
        if(x < y) {
            std::cout << "the smaller value is: " << x << '\n';
            std::cout << "the larger value is: " << y << '\n';
            difference = y - x;
        } else if(y < x) {
            std::cout << "the smaller value is: " << y << '\n';
            std::cout << "the larger value is: " << x << '\n';
            difference = x - y;
        } else if(x == y) {
            std::cout << "the numbers are equal" << '\n';
        }

        if(difference <= 1.0/100 && difference > 0
        || difference >= -1.0/100 && difference < 0) {
            
        }

        if(x == '|' || y == '|')
            break;
    }
        
}