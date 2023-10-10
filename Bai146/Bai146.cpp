#include <iostream>
using namespace std;
int SoDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << SoDoiXung(n);
	return 0;
}

int SoDoiXung(int nn)
{
	float dn = 0;
	int t = nn;
	while (t != 0)
	{
		float dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn)
		cout << "La so doi xung";
	else
		cout << "Khong la so doi xung";
}