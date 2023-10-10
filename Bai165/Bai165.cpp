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
int SoNguyenLonNhat(int nn)
{
	float t = 1;
	float k = 0;
	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}
