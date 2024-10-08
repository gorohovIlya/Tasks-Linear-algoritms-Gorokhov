// Задача 5. Округлённое время

#include <iostream>
using namespace std;

int main()
{
    double h;
    double m;
    double s;
    cout << "Enter time in hours, minutes and seconds: ";
    cin >> h >> m >> s;
    int r_minutes = int(m + (s / 60.0) + 0.5);
    int r_hours = int(h + (r_minutes / 60.0) + 0.5);
    cout << h << " hours " << r_minutes << " minutes" << " or " << r_hours << " hours";
    return 0;
}