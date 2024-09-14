// Fix 3.6.3 program to properly display median

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<double> temps;
    for(double temp; std::cin>>temp;)
        temps.push_back(temp);

    // compute mean temperature:
    double sum = 0;
    for (double x : temps)
        sum += x;
    std::cout << "Average temperature: " << sum/temps.size() << '\n';

    // comuter median temperature
    std::ranges::sort(temps);
    std::cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}