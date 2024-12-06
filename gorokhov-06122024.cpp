// tasks-06122024.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <cmath>
#include <fstream>
#define _USING_MATH_DEFINES

using namespace std;

int repeats(int n);

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream output("result_gorokhov.txt");
    for (int i = 1023; i < 9877; i++) {
        if (repeats(i)) {
            continue;
        }
        else {
            output << i << endl;
        }
    }
    output.close();
    cout << "Результат программы сохранён в файле result_gorokhov.txt";
}

int repeats(int n) {

    int flag_reps = 0;
    int len = 4;
    int dec_nums[4] = { 0, 0, 0, 0 };
    for (int j = 0; j < 4; j++) {
        dec_nums[j] = n % 10;
        n = n / 10;
    }
    while (len > 0) {
        for (int i = 0; i < 3; i++) {
            if (dec_nums[i] > dec_nums[i + 1]) {
                int tmp = dec_nums[i];
                dec_nums[i] = dec_nums[i + 1];
                dec_nums[i + 1] = tmp;
            }
        }
        len -= 1;
    }
    for (int z = 0; z < 4; z++) {
        if (dec_nums[z] == dec_nums[z + 1]) {
            flag_reps += 1;
        }
    }
    return flag_reps;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
