#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include "CorrectInput.h"
using namespace std;

class MaterialPoint {
private:
    double x, y, z; // координати початкового положення
    double v_x, v_y, v_z; // вектор рівномірної швидкості

public:

    MaterialPoint(double min, double max);

    MaterialPoint(double x, double y, double z, double v_x, double v_y, double v_z);

    MaterialPoint();

    // метод для перевірки, чи точка попадає в перший октант за заданий час t
    bool isInFirstOctant(double t);


    void print_point() const;
};