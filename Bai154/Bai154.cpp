#include <iostream>
#include <iomanip>
using namespace std;
void xuat(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	xuat(n);
	return 0;
}
void xuat(int nn)
{
	int ahh = nn;
	cout << ahh;
	while (ahh != 1) 
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2; 
		else
			ahh = 3 * ahh + 1;
		cout << setw(4) << ahh; 
	}
}