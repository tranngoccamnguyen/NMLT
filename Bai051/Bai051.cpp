#include <iostream>
#include <iomanip>
using namespace std;
int tichuocso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich uoc so: ";
	cout << tichuocso(n);
	return 0;
}
int tichuocso(int nn)
{
	int i = 1;
	int t = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;
		i = i + 1;
	}
	return t;
}