// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>

// Pre/Post conditions

void error(std::string s) {
    throw std::runtime_error{s};
}



int main() {
    try {

    }

    catch(std::exception& e) {
        std::cerr << "Error occurred: " << e.what() << '\n';
    }

    catch(...) {
        std::cerr << "Unknown error occurred.\n";
    }
}