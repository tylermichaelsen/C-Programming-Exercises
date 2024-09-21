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
    try {
        double input = 0;
        while(true) {
            std::cin >> input;
            if(!std::cin)
                error("Invalid input.");
            else 
                std::cout << input << " squared is " << square(input) << '\n';
        }
    }

    catch(std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    catch(...) {
        std::cerr << "Unknown error occurred.\n";
    }
}

