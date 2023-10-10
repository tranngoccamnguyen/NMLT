#include <iostream>
#include <iomanip>
using namespace std;
int tichuocsole(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich uoc so le: ";
	cout << tichuocsole(n);
	return 0;
}

int tichuocsole(int nn)
{
	int i = 1;
	int t = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;
		i = i + 2;
	}
	return t;
}