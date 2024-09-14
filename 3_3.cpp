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

    // compute median temperature
    std::ranges::sort(temps);
    
    // Check to see if vector size is even
    if(temps.size() % 2 == 0) {
        // LOL
        temps.push_back(temps[temps.size() / 2] - ((temps[(temps.size() / 2) + 1] - temps[temps.size() / 2])/2));
        
        std::ranges::sort(temps);
    } 
    std::cout << "Median temperature: " << temps[temps.size()/2] << '\n';

}