#include <iostream>
#include <iomanip>
using namespace std;
void xuat(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	xuat(n);
	return 0;
}
void xuat(int nn)
{

	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)1 / i;
		cout << s << setw(4);
		i += 1;
	}

}

