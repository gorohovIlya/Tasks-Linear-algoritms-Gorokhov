// Ã»À» ‚  Ã

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


int main(void) {
    setlocale(LC_ALL, "Russian");
    float km, j = 1.0, res, alpha = 0.0;
    cout << "¬‚Â‰ËÚÂ ÍËÎÓÏÂÚ˚: ";
    cin >> km;
    cout << "Ã»À»" << "††††† " << " Ã" << endl;
    while (alpha < int(km))
    {
        ++alpha;
        res = alpha * 0.62137;
        if (res > j)
        {
            cout << j << "††††† " << j * 1.609344 << endl;
            ++j;
        }
        cout << res << "†††††† " << alpha << endl;
    }
    float if_drob, ost;
    if (km - int(km) > 0)
    {
        if_drob = int(km) * 0.621371 + 0.621371;
        ost = int(km) * 0.621371 + (km - int(km)) * 0.621371;
        if (j * 1.609344 > km)
        {
            cout << ost << "†††† " << km << endl;
        }
        else if (if_drob > j && if_drob > ost)
        {
            cout << j << "††††† " << j * 1.609344 << endl;
            cout << ost << "†††† " << km << endl;
        }
    }
    if (km == 0)
    {
        cout << 0 << "†††††† " << 0 << endl;
    }
    return 0;
}
