#define _GLIBCXX_VISIBILITY(V)
#include <iostream>
#include <cmath> // for pow()



// Define M_PI if not already defined
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

int main() {
    double radius;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    if (radius > 0) {
        double area = M_PI * pow(radius, 2); // Using M_PI and pow()
        std::cout << "Area of the circle: " << area << std::endl;
    } else {
        std::cout << "Radius should be positive!" << std::endl;
    }

    return 0;
}
