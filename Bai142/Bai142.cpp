#include <iostream>
using namespace std;
int ChuSoDaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so dao nguoc: ";
	cout << ChuSoDaoNguoc(n);
	return 0;
}

int ChuSoDaoNguoc(int nn)
{
	int dn = 0;
	int t = nn;
	while (t!=0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}