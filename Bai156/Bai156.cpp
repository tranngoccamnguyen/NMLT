#include <iostream>
#include <iomanip>
using namespace std;
void xuat(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	xuat(n);
	return 0;
}
void xuat(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t *= i;
		cout << t << setw(4);
		i += 1;
	}
}

