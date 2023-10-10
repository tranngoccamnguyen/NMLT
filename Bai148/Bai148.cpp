#include <iostream>
using namespace std;
int ToanChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << ToanChan(n);
	return 0;
}

int ToanChan(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "La so toan chan";
	else
		cout << "Khong la so toan chan";
}