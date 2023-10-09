#include <iostream>
using namespace std;
float luythua(float, int);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "T=";
	cout << luythua(x,n);
	return 0;
}
float luythua(float xx, int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		i = i + 1;
	}
	return t;
}