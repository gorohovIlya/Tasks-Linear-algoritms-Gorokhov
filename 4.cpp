// έλλθορ

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int a = 7;
    int b = 10;
    int start_x = -a;
    int start_y = -b;
    int cur_row = 0;
    for (float x = start_x; x <= a; x += 1) {
        for (float y = start_y; y <= b; y += 1) {
            if (((x * x) / (a * a)) + ((y * y) / (b * b)) <= 1)
            {
                cout << "(" << x << "," << y << ")" << endl;
            }
        }
    }
}
