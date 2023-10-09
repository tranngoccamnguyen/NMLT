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
float tong (int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, 3);
		i = i + 1;
	}
	return s;
}