#include <iostream>
using namespace std;
float tinh(float, int);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S=";
	cout << tinh(x, n);
	return 0;
}
float tinh(float xx, int nn)
{
	float t = xx;
	int i = 1;
	while (i <= nn)
	{
		t = t + (xx + i);
		i = i + 1;
	}
	return t;
}