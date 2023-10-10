#include <iostream>
#include <cmath>
using namespace std;
float tong(float, int);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S= " << tong(x,n);
	return 0;
}
float tong(float xx, int nn)
{
	float s = 0;
	int i = 1;
	float t = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = sqrt(t + s);
		i += 1;
	}
	return s;
}