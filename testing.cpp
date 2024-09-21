// This is where I do some testing for concepts and 
// ideas that I need more work on

#include <iostream>

void error(std::string s) {
    throw std::runtime_error{s};
}

double square(double x) {
    if(x < 0) 
        error("Non-positive number.");
    return x * x;
    
}

int main() {

}

