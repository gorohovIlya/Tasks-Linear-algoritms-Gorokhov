#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;

double func(double); // Объявление функции

int main()
{
    double a_start = -5.0;
    double a_stop = 5.0;
    double a_step = 0.1;
    double eps = 1.0E-7;
    int flag = 1;
    for (double x = a_start; x <= a_stop; x += a_step) {
        if (fabs(func(x) - func(-x)) > eps) { // Проверка на чётность
            flag = 0;
            break;
        }
    }
    if (flag) {
        cout << "chet!!!\n";
        return 0;
    }
    int flag = 1;
    for (double x = a_start; x <= a_stop; x += a_step) {
        if (fabs(func(x) + func(-x)) > eps) { // Проверка на нечётность
            flag = 0;
            break;
        }
    }

    if (flag) {
        cout << "Nechet!!!\n";
    }
    else {
        cout << "diff\n";
    }
    return 0;
}

double func(double x) {
    return x * x * x * x;
}
