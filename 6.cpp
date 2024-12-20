// Задание 8. Второй замечательный предел

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double e = 0.0001;
    double x = 1.0;
    while (M_E - pow(1 + (1 / x), x) >= e) {
        cout << x << "  " << pow(1 + (1 / x), x) << endl;
        x += 1;
        if (M_E - pow(1 + (1 / x), x) < e) {
            break;
        }
    }
}
