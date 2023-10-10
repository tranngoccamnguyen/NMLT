#include <iostream>
#include <cmath>
using namespace std;
int sohang(int);

int main()
{
	int n;
	cout << "Nhap n :";
	cin >> n;

	cout << "Ket qua (" << n << ") la : ";
	cout << Sohang(n);
	return 0;
}
int Sohang(int nn)

{
	float at = 2;
	float bt = 1;
	float ahh, bhh;
	int i = 2;

	while (i <= nn)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	return ahh, bhh;
}