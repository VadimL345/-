#include "Functions.h"

int main() {
    int num_points;
    num_points = getValidPositiveIntegerInput("Enter te number of points: ");
    MaterialPoint points[num_points];
    srand(time(nullptr));
    array_initialization(points, num_points);
    double t;
    t = getRealPositiveNumberInput("Enter the time: ");
    draw_a_diving_line();
    arry_output(points, num_points, "initial coordinates");
    draw_a_diving_line();
    array_element_isInFirstOctant(points, num_points, t);
    draw_a_diving_line();
    arry_output(points, num_points, "new coordinates");
    return 0;
}

