#include "Circle.h"

Circle:: Circle(double xMin, double xMax, double yMin, double yMax) {
    srand(time(0));
    radius = rand() % 10 + 1;
    x = (double) rand() / RAND_MAX * (xMax - xMin) + xMin;
    y= (double) rand() / RAND_MAX * (yMax - yMin) + yMin;
}

Circle:: Circle(double r) : radius(r), x(3), y(4) {}

Circle:: Circle(double r, double x, double y) : radius(r), x(x), y(y) {}

double Circle::getRadius() const { return radius; }

double Circle::getX() const { return x; }

double Circle::getY() const { return y; }

void Circle:: setRadius(double r) { radius = r; }

void Circle:: setX(double x) { this->x = x; }

void Circle:: setY(double y) { this->y = y; }

double Circle:: calculateLength() const { return 2 * M_PI * radius; }

Circle& Circle::operator++() { ++x; return *this; }

Circle Circle::operator++(int) { Circle temp(*this); ++y; return temp; }

Circle Circle::operator*(int n) { Circle temp(*this); temp.radius *= n; return temp; }

