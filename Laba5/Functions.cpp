#include "Functions.h"

double FuncMaxVal(LinearFunction *arr1, int size1, QuadraticFunction* arr2, int size2, double x) {
    double maxVal = -INFINITY;
    TFunction *maxFunc = nullptr;
    for (int i = 0; i < size1; i++) {
        double val = arr1[i].evaluate(x);
        if (val > maxVal) {
            maxVal = val;
            maxFunc = &arr1[i];
        }
    }
    for (int i = 0; i < size2; i++) {
        double val = arr2[i].evaluate(x);
        if (val > maxVal) {
            maxVal = val;
            maxFunc = &arr2[i];
        }
    }
    draw_line();
    cout << "Функція з найбільшим значенням у точці x = " << x << ":" << endl;
    maxFunc->print(x);
}

void change_coefficents_functions(LinearFunction* arr, int size, int n) {
    for (int i = 0; i < size; i++)
        arr[i].increaseCoefficients(n);
}

void change_coefficents_functions(QuadraticFunction* arr, int size, int n) {
    for (int i = 0; i < size; i++)
        arr[i].decreaseCoefficients(n);
}
void printArray(LinearFunction* arr, int size, double x) {
    draw_line();
    cout << "Лінійні функції:" << endl;
    for(int i = 0; i < size; i++)
        arr[i].print(x);
}

void printArray(QuadraticFunction *arr, int size, double x) {
    draw_line();
    cout << "Квадратичні функції:" << endl;
    for(int i = 0; i < size; i++)
        arr[i].print(x);
}

void draw_line() {
    cout << "_________________________________________________________________________" << endl;
}