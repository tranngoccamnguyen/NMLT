#include <iostream>
#include <iomanip>
using namespace std;
int tonguocso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong uoc so: ";
	cout << tonguocso(n);
	return 0;
}
int tonguocso(int nn)
{
	int i = 1;
	int s = 0;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;
	}
	return s;
}