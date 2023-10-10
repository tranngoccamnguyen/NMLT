#include <iostream>
using namespace std;
int SoNguyenDuong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << SoNguyenDuong(n);
	return 0;
}
int SoNguyenDuong(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		float dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "n co giam dan tu trai sang phai";
	else
		cout << "n ko giam dan tu trai sang phai";
}

