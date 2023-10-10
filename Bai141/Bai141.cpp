#include <iostream>
#include <cmath>
using namespace std;
int ChuSoDauTien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so dau tien: ";
	cout << ChuSoDauTien(n);
	return 0;
}

int ChuSoDauTien(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}