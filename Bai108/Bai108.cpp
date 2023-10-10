#include <iostream>
#include <cmath>
using namespace std;
float exp(float);

int main()
{
	float x;
	cout << "Nhap x :";
	cin >> x;
	cout << "Gia tri e^x : ";
	cout << exp(x);
	return 0;
}

float exp(float xx)
{
	double s = 1, m = 1, e = 1, i = 1, t = 1;
	while (e >= pow(10, -6))
	{
		t = t * xx;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i++;
	}
	return s;
}