// Задание 7. Первый замечательный предел

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double e = 0.00000001;
    double x = 1.0;
    while (1 - (sin(x) / x) >= e) {
        cout << x << endl;
        x /= 2;
        if (1 - (sin(x) / x) < e) {
            break;
        }
    }
    return 0;
}
