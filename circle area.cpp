#include <iostream>
#define PI 3.1416

int main() {
    float radius, area;

    std::cout << "Enter the radius of the circle (meter): ";
    std::cin >> radius;

    area = (PI * (radius * radius));

    std::cout << "The area of the circle is: " << area << " square meter" << std::endl;

}