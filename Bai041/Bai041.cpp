#include <iostream>
using namespace std;
float tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(" << n << ")=";
	cout << tong(n);
	return 0;
}
float tong(int nn)
{
	int i = 1;
	float s = 0;
	while (i <= nn)
	{
		s = s + i * (i + 1) * (i + 2);
		i = i + 1;
	}
	return s;
}