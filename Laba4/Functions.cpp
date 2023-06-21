#include "Functions.h"

Circle findLargestCircle(Circle c1, Circle c2, Circle c3, string& name) {
    double c1circumference = c1.calculateLength();
    double c2circumference = c2.calculateLength();
    double c3circumference = c3.calculateLength();
    if (c1circumference >= c2circumference && c1circumference >= c3circumference) {
        name = "c1";
        return c1;
    } else if (c2circumference >= c1circumference && c2circumference >= c3circumference) {
        name = "c2";
        return c2;
    } else {
        name = "c3";
        return c3;
    }
}
void print(const Circle& c, const string& name) {
    cout << name << " (" << c.getX() << ", " << c.getY() << "), " << "radius = " << c.getRadius() << ", circumference = " << c.calculateLength() << endl;
}

void draw_line() {
    cout << "________________________________________________________________________" << endl;
}
