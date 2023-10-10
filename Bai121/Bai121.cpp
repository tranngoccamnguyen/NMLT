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
	int att = 1, at = 1;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}