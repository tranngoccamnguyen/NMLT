#include <iostream>
using namespace std;
int giaithua(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << n << "!=";
	cout << giaithua(n);
	return 0;
}
int giaithua(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i = i + 1;
	}
	return t;
}