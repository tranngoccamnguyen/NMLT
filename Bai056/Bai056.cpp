#include <iostream>
#include <iomanip>
using namespace std;
int dem(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong uoc so chan: ";
	cout << dem(n);
	return 0;
}
int dem(int nn)
{
	int i = 2;
	int dem = 0;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem += 1;
		i = i + 2;
	}
	return dem;
}