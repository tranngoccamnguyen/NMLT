#include <iostream>
#include <cmath>
using namespace std;
int BCNN(int, int);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Boi chung nho nhat cua" << a << "," << b << ": ";
	cout << BCNN(a, b);
	return 0;
}

int BCNN(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int bcnn = (float)abs(aa * bb) / (m + n);
	return bcnn;
}