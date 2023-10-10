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
		ahh = (float)(at * at + 2) / (2 * at);
		i += 1;
		at = ahh;
	}
	return ahh;
}