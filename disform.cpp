#include <iostream>
#include "Coordinate.hpp"

int main() {
    float x1, y1, x2, y2;

    std::cout << "give first coordinate's x and y" << std::endl;
    std::cin >> x1 >> y1;

    std::cout << "give second coordinate's x and y" << std::endl;
    std::cin >> x2 >> y2;

    Coordinate *first = new Coordinate(x1, y1);
    Coordinate *second = new Coordinate(x2, y2);
    float result = first -> distance(second);
    std::cout << result << std::endl;
}