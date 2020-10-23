// Lab_03_1.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 6
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат
	double B; // проміжний результат

	cout << "x = "; cin >> x;

	A = 5 * pow(M_E, 3 * x);

	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		B = 3 + sin(abs(x));
	if (-1 < x && x <= 3)
		B = 2 * pow(M_E, x / 4 - 1);
	if (x > 3)
		B = 7 - sqrt(2) * pow(x, 3);
	
	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		B = 3 + sin(abs(x));
	else
		if (-1 < x && x <= 3)
			B = 2 * pow(M_E, x / 4 - 1);
		else 
			B = 7 - sqrt(2) * pow(x, 3);

	y = A - B;

	cout << endl;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;

}