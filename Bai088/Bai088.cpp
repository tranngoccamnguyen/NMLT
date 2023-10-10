#include <iostream>
using namespace std;
float Tong(float, int);

int main()
{
	float x;
	int n;
	cout << "Nhap so thuc x: ";
	cin >> x;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong S(" << x << "," << n << ") la: ";
	cout << Tong(x, n);
	return 1;
}

float Tong(float xx, int nn)
{
	float s = 0, m = 0;
	int i = 1, dau = +1;
	while (i <= nn)
	{
		m = m + i;
		s = s + (float)dau / m;
		i = i++;
		dau = -dau;
	}
	return s;
}
