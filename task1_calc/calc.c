#include "calc.h"
#include <math.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0.0;
    }
}

int factorial(int n) {
    if (n < 0) {
        return -1;
    }

    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

double squareRoot(double x) {
    if (x >= 0) {
        return sqrt(x);
    } else {
        return -1.0;
    }
}