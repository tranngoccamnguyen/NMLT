#include <iostream>
using namespace std;
int dem(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "So luong chu so: " << dem(n);
	return 0;
}

int dem(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dem += 1;
		t = t / 10;
	}
	return dem;
}