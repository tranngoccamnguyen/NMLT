#include <iostream>
#include <iomanip>
using namespace std;
void lietke(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac uoc so: ";
	lietke(n);
	return 0;
}
void lietke(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << i << setw(4);
		i += 1;
	}
}