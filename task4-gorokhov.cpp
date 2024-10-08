// Задача 4. Вершина параболы

#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
    double x0 = -1 * b / (2 * a);
    double y0 = a * x0 * x0 + b * x0 + c;
    cout << x0 << " " << y0;
    return 0;
}