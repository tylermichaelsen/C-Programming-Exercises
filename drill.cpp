// This gets updated to the latest drill I've worked on

#include <iostream>
#include <vector>

int main() {
    for(int x, y; std::cin>>x>>y;) {
        if(x < y) {
            std::cout << "the smaller value is: " << x << '\n';
            std::cout << "the larger value is: " << y << '\n';
        } else if(y < x) {
            std::cout << "the smaller value is: " << y << '\n';
            std::cout << "the larger value is: " << x << '\n';
        }
            

        if(x == '|' || y == '|')
            break;
    }
        
}