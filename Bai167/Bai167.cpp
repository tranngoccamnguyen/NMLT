#include <iostream>
using namespace std;
int SoNguyenNhoNhat(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So nguyen k nho nhat: ";
	cout << SoNguyenNhoNhat(n);
	return 0;
}
int SoNguyenNhoNhat(int nn)
{
	float s = 0;
	float k = 0;
	while (s + k + 1 < nn)
	{
		k = k + 1;
		s = s + k;
	}
	return k;
}
