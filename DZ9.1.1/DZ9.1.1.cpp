// DZ9.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    setlocale (0, "");

    const int N = 10, M = 5, L = 5;
    int digits1[N] = {}, digits2[M] = {}, digits3[L] = {};
    srand(time(NULL));

    cout << "********Первоначальный массив********** \n";
    for (int i = 0; i < N; i++)
    {
        digits1[i] = 20 + rand() % 100;
        cout << digits1[i] << "\t";
    }
    cout << endl;

    cout << "Новый массив из первой половины первоначального массива \n";
    for ( int i = 0; i < M; i++)
    {
        digits2[i] = digits1[i];
        cout << digits2[i] << "\t";
    }
    cout << endl;

    cout << "Новый массив из второй половины первоначального массива \n";
    for (int i = 0; i < L; i++)
    {
        digits3[i] = digits1[i+5];
        cout << digits3[i] << "\t";
    }
    cout << "\n\n\n\n";
    return 0;
}




