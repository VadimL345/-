#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class Circle {
    double radius;
    double x;
    double y;
public:
    Circle(double, double, double, double);
    Circle(double);
    Circle(double, double, double);
    double getRadius() const;
    double getX() const;
    double getY() const;
    void setRadius(double);
    void setX(double);
    void setY(double);
    double calculateLength() const;
    Circle& operator++();
    Circle operator++(int);
    Circle operator*(int);
};
