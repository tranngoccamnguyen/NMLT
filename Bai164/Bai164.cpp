#include <iostream>
using namespace std;
float Tong(float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua la: ";
	cout << Tong(n);
	return 0;
}
float Tong(float nn)
{
	float s = 1;
	int i = 1;
	while (i <= nn)
	{
		s = (float)1 / (1 + s);
		i = i + 1;
	}
	return s;
}
