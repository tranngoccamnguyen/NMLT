#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "S=";
	cout << Tong(n);

	return 1;
}

float Tong(int nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = s + i*t;
		i = i + 1;
	}
	return s;
}
