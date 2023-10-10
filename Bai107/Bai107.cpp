#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float cos(float);

int main()
{
	float x;
	cout << "Gia tri cos:  ";
	cin >> x;

	cout << cos(x);
	return 0;
}

float cos(float xx)
{
	float s = 1, m = 1, e = 1, i = 2, t = 1, x;
	float dau = -1;
	xx = (x * M_PI) / 180;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + e * dau;
		dau = -dau;
		i = i + 2;
	}
	return s;
}