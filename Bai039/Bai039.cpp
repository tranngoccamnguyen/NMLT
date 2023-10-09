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
float tong( int nn)
{
	int i = 1;
	float t = 1;
	while (i <= nn)
	{
		t = t * (1 + (float)1 / (i * i));
		i = i + 1;
	}
	return t;
}