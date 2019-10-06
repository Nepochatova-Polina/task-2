#include <iostream>
#include "Series.h"
#include "cmath"

using namespace std;
static double PI = 3.14;

//Proc1
void Series::PowerA3(double a, double &b) {
    b = pow(a, 3);
}

//Proc3
void Series::Mean(int x, int y, double &AMean, double &GMean) {
    AMean = (x + y) / 2;
    GMean = sqrt(x * y);
}

//Proc22
double Series::Calc(double firstNumber, double secondNumber, int operation) {
    switch (operation) {
        case 1:
            return firstNumber - secondNumber;
        case 2:
            return firstNumber * secondNumber;
        case 3:
            return firstNumber / secondNumber;

        default:
            return firstNumber + secondNumber;
    }
}

//Proc32
double Series::DagToRad(int d) {
    double radian;
        radian = d / PI;
        return radian;
    }
