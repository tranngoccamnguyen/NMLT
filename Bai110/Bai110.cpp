#include <iostream>
#include <cmath>
using namespace std;
float pi(float);

int main()
{
	int n;
	cout << "Nhap n :";
	cin >> n;
	cout << "Gia tri cua pi :";
	cout << pi(n);
	return 0;
}

float pi(float)
{
	double s = 0, e = 4, i = 1, dau = +1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}