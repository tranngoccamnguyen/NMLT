#include <iostream>
#include <cmath>
using namespace std;
float tong(int, int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int k;
	cout << "Nhap k:";
	cin >> k;

	cout << "S=" << tong(n,k);
	return 0;
}

float tong(int nn, int kk)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, kk);
		i += 1;
	}
	return s;
}