#include <iostream>

class Coordinate {
    private:
        float x, y;
    public:
        Coordinate(float nx, float ny);
        float getX();
        float getY();
        Coordinate* midpoint(Coordinate *x);
        void printDetails();
};

Coordinate::Coordinate(float nx, float ny) {
    this -> x = nx;
    this -> y = ny;
}

float Coordinate::getX() {
    return this -> x;
}

float Coordinate::getY() {
    return this -> y;
}

void Coordinate::printDetails() {
    std::cout << "(" << this -> x << ", " << this -> y << ")";
}

Coordinate* Coordinate::midpoint(Coordinate *buf) {
    float mid_x = (this -> x + buf -> getX()) / 2;
    float mid_y = (this -> y + buf -> getY()) / 2;
    return new Coordinate(mid_x, mid_y);
}