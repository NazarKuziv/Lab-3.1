// Lab_03_1.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 6
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ���������
	double B; // �������� ���������

	cout << "x = "; cin >> x;

	A = 5 * pow(M_E, 3 * x);

	// ����� 1: ������������ � ��������� ����
	if (x <= -1)
		B = 3 + sin(abs(x));
	if (-1 < x && x <= 3)
		B = 2 * pow(M_E, x / 4 - 1);
	if (x > 3)
		B = 7 - sqrt(2) * pow(x, 3);
	
	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
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