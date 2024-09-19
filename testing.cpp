// This is where I do some testing for concepts and 
// ideas that I need more work on

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for(int x; std::cin>>x;)
        v.push_back(x);
    for(int i = 0; i <= v.size(); ++i)
        std::cout << "v[" << i << "] == " << v[i] << '\n';
}