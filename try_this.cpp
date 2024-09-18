// This gets updated to the newest 'Try this' exercise I've worked on

#include <iostream>

// Compiler Error testing

int area(int length, int width) {
    if(length <=0 || width <= 0)
        return -1;
    return length*width;
}


int framed_area(int x, int y) {
    constexpr int frame_width = 2;
    if(x-frame_width <= 0 || y-frame_width <= 0)
        std::cout << "Error\n";
    return area(x-frame_width, y-frame_width);
}


int f(int x, int y, int z) {
    int area1 = area(x,y);
    if(area1<=0)
        std::cout << "Error\n";
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3;
    std::cout << area1 << " " << area2 << " " << area3 << " " << ratio;
}

int main () {
    int x, y, z;
    std::cin >> x >> y >> z;
    f(x,y,z);
}