#include <iostream>
using namespace std;
float Tong(int, float);

int main()
{
	float x;
	cout << "Nhap so thuc x: ";
	cin >> x;

	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "S=";
	cout << Tong(n, x);

	return 1;
}

float Tong(int nn, float xx)
{
	float s = 1;
	float t = 1;
	float m = 1;
	int i = 2;
	while (i <= 2*nn)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}
