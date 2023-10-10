#include <iostream>
using namespace std;
int sohang(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "So hang thu " << n << " la: ";
	cout << sohang(n);
	return 0;
}
int sohang(int nn)
{
	int att = -1;
	int at = 3;
	int i = 2;
	int t = 2;
	int ahh;
	while (i <= nn)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i += 1;
		att = at;
		at = ahh;
	}
	return ahh;
}