// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>
#include <stdexcept>

// Pre/Post conditions



void error(std::string s) {
    throw std::runtime_error{s};
}

int area(int length, int width) {
    
}

int main() {
    try {
       ;
    }

    catch(std::exception& e) {
        std::cerr << "Error occurred: " << e.what() << '\n';
    }

    catch(...) {
        std::cerr << "Unknown error occurred.\n";
    }
}