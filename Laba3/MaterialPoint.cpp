#include "MaterialPoint.h"

MaterialPoint:: MaterialPoint(double min, double max) {
    x = (double) rand() / RAND_MAX *(max - min) + min;
    y = (double) rand() / RAND_MAX *(max - min) + min;
    z = (double) rand() / RAND_MAX *(max - min) + min;
    v_x = (double) rand() / RAND_MAX *(max - min) + min;
    v_y = (double) rand() / RAND_MAX *(max - min) + min;
    v_z = (double) rand() / RAND_MAX *(max - min) + min;
}
MaterialPoint:: MaterialPoint() {
    x = 0;
    y = 0;
    z = 0;
    v_x = 0;
    v_y = 0;
    v_z = 0;
}
MaterialPoint:: MaterialPoint(double x, double y, double z, double v_x, double v_y, double v_z) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->v_x = v_x;
    this->v_y = v_y;
    this->v_z = v_z;
}
bool MaterialPoint:: isInFirstOctant(double t) {
    x = x + v_x * t;
    y = y + v_y * t;
    z = z + v_z * t;
    return x >= 0 && y >= 0 && z >= 0;
    }

void MaterialPoint:: print_point() const {
    ostringstream outStr;
    outStr << "(" << x << ", " << y << ", " << z << ")";
    cout << setw(40) << left << outStr.str();
    cout << "v(" << v_x << ',' << v_y << ',' << v_z << ')' << endl;
}


