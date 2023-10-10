#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void lietke(int, int);

int main()
{
	int x;
	cout << "Nhap x:";
	cin >> x;
	int y;
	cout << "Nhap y:";
	cin >> y;

	lietke(x, y);

	return 0;
}
void lietke(int xx, int yy)
{
	int n = xx; 
	while (n <= yy)
	{
		bool dk1 = (n % 4 == 0) && (n % 100 != 0);
		bool dk2 = n % 400 == 0;  

		if (dk1 || dk2) 
			cout << n << endl; 
		n = n + 1; 
	}
}

