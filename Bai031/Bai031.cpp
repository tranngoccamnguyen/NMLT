#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong S(" << n << ") la: ";
	cout << Tong(n);
	return 1;
}

float Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= 2 * nn+1)
	{
		s = s + (float)1 / i;
		i = i + 2;
	}
	return s;
}
