#include <iostream>
using namespace std;
int dem(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	cout << "So luong chu so dau tien:" << dem(n);
	return 0;
}
int dem(int nn)
{
	int dt = nn;
	while (dt > 10)
		dt = dt / 10;
	int dem = 0;
	int t = nn;
	int dv;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dt)
			dem = dem + 1;
		t = t / 10;
	}

	return dem;
}

