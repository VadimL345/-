#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <sstream>
using namespace std;

class TFunction  {
public:
    virtual double evaluate(double x) const = 0;

    virtual void increaseCoefficients(int amount) = 0;

    virtual void decreaseCoefficients(int amount) = 0;

    virtual void print(double x) = 0;
};

class LinearFunction : public TFunction {
private:
    int a1, a0;
public:
    LinearFunction();

    double evaluate(double x) const;

    void increaseCoefficients(int amount);

    void decreaseCoefficients(int amount);

    void print(double x);
};

class QuadraticFunction : public TFunction {
private:
    int b2, b1, b0;
public:
    QuadraticFunction();

    double evaluate(double x) const;

    void increaseCoefficients(int amount);

    void decreaseCoefficients(int amount);

    void print(double x);
};


