#include <iostream>
#include <cmath>
using namespace std;
float tong(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "S=";
	cout << tong(n);
	return 0;
}
float tong(int nn)
{
	long s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, 4);
		i = i + 1;
	}
	return s;
}