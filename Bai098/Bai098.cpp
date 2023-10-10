#include <iostream>
#include <cmath>
using namespace std;
float tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S= " << tong(n);
	return 0;
}
float tong(int nn)
{
	float s = 0;
	int i = 2;
	while (i <= nn)
	{
		s = pow(s + i, (float)1 / i);
		i += 1;
	}
	return s;
}