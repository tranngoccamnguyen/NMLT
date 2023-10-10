#include <iostream>
using namespace std;
int ToanLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << ToanLe(n);
	return 0;
}

int ToanLe(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "La so toan le";
	else
		cout << "Khong la so toan le";
}