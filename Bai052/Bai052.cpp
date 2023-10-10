#include <iostream>
#include <iomanip>
using namespace std;
int dem(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong uoc so: ";
	cout << dem(n);
	return 0;
}
int dem(int nn)
{
	int i = 1;
	int dem = 0;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem += 1;
		i = i + 1;
	}
	return dem;
}