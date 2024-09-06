// This gets updated to the latest drill I've worked on

#include <iostream>
#include <vector>

int main() {
    for(int x, y; std::cin>>x>>y;) {
        std::cout << x << '\t' << y << '\n';
        if(x == '|' || y == '|')
            break;
    }
        
}