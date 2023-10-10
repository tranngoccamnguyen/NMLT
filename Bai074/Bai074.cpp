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
	float s = 0;
	float t = 1;
	float m = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		s = s + (float)t / m;
		i = i + 1;
	}
	return s;
}
