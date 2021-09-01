#include <iostream>
#include <math.h>

class Coordinate {
    private:
        float x, y;
    public:
        Coordinate(float nx, float ny);
        float getX();
        float getY();
        float distance(Coordinate *buf);
        Coordinate* midpoint(Coordinate *buf);
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

float Coordinate::distance(Coordinate *buf) {
    float x2_x1_sqrd = pow((buf -> getX() - this -> x), 2);
    float y2_y1_sqrd = pow((buf -> getY() - this -> y), 2);
    float numtobesqrtd = x2_x1_sqrd + y2_y1_sqrd;
    return sqrt(numtobesqrtd);
}

Coordinate* Coordinate::midpoint(Coordinate *buf) {
    float mid_x = (this -> x + buf -> getX()) / 2;
    float mid_y = (this -> y + buf -> getY()) / 2;
    return new Coordinate(mid_x, mid_y);
}

void Coordinate::printDetails() {
    std::cout << "(" << this -> x << ", " << this -> y << ")";
}
