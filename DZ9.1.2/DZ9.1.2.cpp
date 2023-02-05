// DZ9.1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");


	const int N = 10, M = 10, L = 10;
	int digits1[N] = {}, digits2[M] = {}, digits3[L] = {};
	srand(time(NULL));
	cout << "***********Первый массив**********\n";
	for (int i = 0; i < N; i++)
	{
		digits1[i] = 20 + rand() % 100;
		cout << digits1[i] << "\t";
	}
	cout << endl;
	cout << "***********Второй массив*********\n";
	for (int i = 0; i < M; i++)
	{
		digits2[i] = 20 + rand() % 100;
		cout << digits2[i] << "\t";
	}
	cout << endl;
	cout << "***********Произведение массивов********\n";
	for (int i = 0; i < L; i++)
	{
		digits3[i] = digits1[i] * digits2[i];
		cout << digits3[i] << "\t";
	}
	return 0;
}

