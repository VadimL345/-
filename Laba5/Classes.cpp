#include "Classes.h"

    LinearFunction::LinearFunction() {
        a1 = rand() % 21 - 10;
        a0 = rand() % 21 - 10;
    }

    double LinearFunction::evaluate(double x) const {
        return a1*x + a0;
    }

    void LinearFunction::increaseCoefficients(int amount) {
        a1 += amount;
        a0 += amount;
    }

    void LinearFunction::decreaseCoefficients(int amount) {
        a1 -= amount;
        a0 -= amount;
    }

    void LinearFunction::print(double x) {
    stringstream str;
        if(a0 > 0)
            str << "f(x) = " << a1 << "x + " << a0;
        else
            str << "f(x) = " << a1 << "x - " << abs(a0);
        cout.width(30);
        cout << left << str.str() << "f(" << x << ") = " << evaluate(x) << endl;
    }


    QuadraticFunction::QuadraticFunction() {
        b2 = rand() % 21 - 10;
        b1 = rand() % 21 - 10;
        b0 = rand() % 21 - 10;
    }

    double QuadraticFunction::evaluate(double x)const {
        return b2*x*x + b1*x + b0;
    }

    void QuadraticFunction::increaseCoefficients(int amount) {
        b2 += amount;
        b1 += amount;
        b0 += amount;
    }

    void QuadraticFunction::decreaseCoefficients(int amount) {
        b2 -= amount;
        b1 -= amount;
        b0 -= amount;
    }

    void QuadraticFunction::print(double x) {
        stringstream str;
        if (b0 > 0) {
            if (b1 > 0)
                str << "f(x) = " << b2 << "x^2 + " << b1 << "x + " << b0;
            else
                str << "f(x) = " << b2 << "x^2 - " << abs(b1) << "x + " << b0;
        }
        if (b0 < 0) {
            if (b1 > 0)
                str << "f(x) = " << b2 << "x^2 + " << b1 << "x - " << abs(b0);
            else
                str << "f(x) = " << b2 << "x^2 - " << abs(b1) << "x - " << abs(b0);
        }
        cout.width(30);
        cout << left << str.str() << "f(" << x << ") = " << evaluate(x) << endl;
    }





