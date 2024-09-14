// Read of sequence of doubles as distances and do some calculations

#include <vector>
#include <iostream>

int main() {
    std::vector<double> cities;
    double sum = 0;
    double smallest = 0, largest = 0;
    for(double city; std::cin>>city;) {
        cities.push_back(city);

        // Skip loop iteration if only 1 city
        if(cities.size() <= 1)
            continue;

        // Find the distance between current and last city
        double distance = 0;
        if(cities[cities.size() - 1] > cities[cities.size() - 2])
            distance = cities[cities.size() - 1] - cities[cities.size() - 2];
        else
            distance = cities[cities.size() - 2] - cities[cities.size() - 1];

        // Add distance to sum
        sum += distance;

        // Find the largest and smallest distances
        if(distance > largest)
            largest = distance;
        else if(distance < smallest)
            smallest = distance;
    }

    // Output the results
    std::cout << "Sum of all distances: " << sum << '\n'
            << "Smallest distance: " << smallest << '\n'
            << "Largest distance: " << largest << '\n'
            << "Average distance: " << sum/cities.size() << '\n';
}