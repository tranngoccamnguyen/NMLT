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
	float s = 0, t = 1;
	int i = 2, dau = -1;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
