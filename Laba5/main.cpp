#include "Functions.h"
#include "CorrectInput.h"

int main() {
    srand(time(nullptr));
    int n, m;
    n = getValidPositiveIntegerInput("Введіть кількість лінійних функцій:");
    m = getValidPositiveIntegerInput("Введіть кількість квадратичних функцій:");
    double x;
    x = getRealNumberInput("Введіть значення аргументу x:");
    // створюємо масиви об'єктів функцій
    LinearFunction linearFuncs[n];
    QuadraticFunction quadraticFuncs[m];
    printArray(linearFuncs, n, x);
    printArray(quadraticFuncs, m, x);
    draw_line();
    cout << "Функції після змін коефіцієнтів" << endl;
    change_coefficents_functions(linearFuncs, n, 3);
    change_coefficents_functions(quadraticFuncs, m, 2);
    printArray(linearFuncs, n, x);
    printArray(quadraticFuncs, m, x);
    FuncMaxVal(linearFuncs, n, quadraticFuncs, m, x);
    return 0;
}
