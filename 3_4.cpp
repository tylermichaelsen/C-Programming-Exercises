// Read of sequence of doubles as distances and do some calculations

#include <vector>
#include <iostream>

int main() {
    std::vector<double> cities;
    for(double city; std::cin>>city;) {
        cities.push_back(city);
    }
}