#include "calculator.h"
#include <iostream>

namespace Calculator {
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            std::cout << "Greska: Dijeljenje s nulom!\n";
            return 0;
        }
        return a / b;
    }
}