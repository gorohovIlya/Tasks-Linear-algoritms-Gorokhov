// Задача 3. Коммерция

#include <iostream>
using namespace std;

int main()
{
    double k;
    double s;
    double p;
    cout << "Enter k, s and p: ";
    cin >> k >> s >> p;
    double in_months = log(s / k) / log(1 + (p / 100.0));
    int years = (int)in_months / 12;
    int months = (int)(in_months - years * 12);
    cout << years << " years " << months << " months";
    return 0;
}