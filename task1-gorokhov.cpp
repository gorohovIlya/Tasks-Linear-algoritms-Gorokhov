// Задача 1. Градусы в радианы

#include <iostream>
using namespace std;

int main()
{
    int degrees;
    int minutes;
    int seconds;
    double pi = acos(0.0) * 2;
    cout << "Enter angle in degrees, minutes, seconds: ";
    cin >> degrees >> minutes >> seconds;
    int k = (degrees => 0) - (degrees < 0);
    double to_radians = (degrees + k * (minutes / 60.0) + k * (seconds / 3600.0)) / 180.0;
    cout << to_radians;
    return 0;
}