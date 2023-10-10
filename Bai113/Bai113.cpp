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
	int at = 2;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i += 1;
		at = ahh;
	}
	return ahh; 
}