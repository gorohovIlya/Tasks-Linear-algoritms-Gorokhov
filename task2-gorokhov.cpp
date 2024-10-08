// Задача 2. Радианы в градусы

#include <iostream>
using namespace std;

int main()
{
    double radians;
    cout << "Enter angle in radians: ";
    cin >> radians;
    double pi = 2 * acos(0.0);
    double angle_in_secs = (radians / pi) * 180 * 3600;
    double degrees = angle_in_secs / 3600;
    int int_degrees = (int)degrees;
    double min_secs = angle_in_secs - (int_degrees * 3600);
    int minutes = (int)(min_secs / 60);
    double seconds = min_secs - minutes * 60;
    cout << "degrees: " << int_degrees << " " << "minutes: " << minutes << " " << "seconds: " << " " << seconds;
    return 0;
}