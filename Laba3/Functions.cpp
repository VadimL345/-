#include "Functions.h"

void array_initialization(MaterialPoint* array, int size_of_array) {
    for (int i = 0; i < size_of_array; i++) {
        char choice;
        cout << "Do you want to generate coordinates and velocity vector? (y/n)";
        cin >> choice;
        cin.ignore();
        if (choice == 'y') {
            double min_range, max_range;
            cout << "Enter the range" << endl;
            min_range = getRealNumberInput("Enter min: ");
            max_range = getRealNumberInput("Enter max: ");
            array[i] = MaterialPoint(min_range, max_range);
            draw_a_diving_line();
        } else if(choice == 'n') {
            double x, y, z, v_x, v_y, v_z;
            cout << "Enter the initial coordinates of the point" << endl;
            x = getRealNumberInput("Enter x: ");
            y = getRealNumberInput("Enter y: ");
            z = getRealNumberInput("Enter z: ");
            cout << "Enter the uniform velocity vector" << endl;
            v_x = getRealNumberInput("Enter v_x: ");
            v_y = getRealNumberInput("Enter v_y: ");
            v_z = getRealNumberInput("Enter v_z: ");
            array[i] = MaterialPoint(x, y, z, v_x, v_y, v_z);
            draw_a_diving_line();
        }

    }

}

void arry_output(MaterialPoint* array, int size_of_array, const string& str) {
    cout << setw(47) << left << str << "velocity vector" << endl;
    for(int i = 0; i < size_of_array; i++) {
        cout << "Point_" << i + 1;
        array[i].print_point();
    }
}
void array_element_isInFirstOctant(MaterialPoint* array, int size_of_array, double t) {
    cout << "Points in the first octant at time t = " << t << ":" << endl;
    for (int i = 0; i < size_of_array; i++) {
        if (array[i].isInFirstOctant(t)) {
            cout << "Point_" << i + 1 << endl;
        }
    }
}
void draw_a_diving_line() {
    cout << "____________________________________________________________________" << endl;
}