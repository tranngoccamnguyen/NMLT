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
	int i = 1;
	while (i <= nn)
	{
		s = pow(s + i, (float)1 / (i+1));
		i += 1;
	}
	return s;
}