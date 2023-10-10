#include <iostream>
using namespace std;
bool kiemtra(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	if (kiemtra(n))
		cout << "La dang";
	else
		cout << " Ko la dang";
	return 0;
}
bool kiemtra(int nn)
{
	int t = nn;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			return 0;
		t = t / 3;
	}
}
