#include <iostream>
using namespace std;
float sohang(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "So hang thu " << n << " la: ";
	cout << sohang(n);
	return 0;
}
float sohang(int nn)
{
	int at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i += 1;
		at = ahh;
	}
	return ahh;
}