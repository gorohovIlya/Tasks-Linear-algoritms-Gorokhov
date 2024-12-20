// Задание 2. Периодичность функции

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;

double func(double);          // Объявление функции

int main()
{
    setlocale(LC_ALL, "Russian");
    double start = 0.0;
    double period = M_PI;
    // double period = 2 * M_PI;
    double stop = 5 * period;
    double eps = 1.0E-7;
    int flag = 1;

    for (double x = start; x <= stop; x += period) {

        if (func(x) - func(x + period) > eps) {
            flag = 0;
            break;
        }

    }

    if (flag) {
        cout << "Функция периодическая" << endl;
    }
    else {
        cout << "Функция непериодическая" << endl;
    }

}

double func(double x) {
    return sin(x) * sin(x);
    // return tan(x);
    // return (1 / x) * sin(x); 
}
