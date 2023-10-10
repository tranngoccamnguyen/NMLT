#include <iostream>
#include <iomanip>
using namespace std;
int tonguocsochan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong uoc so chan: ";
	cout << tonguocsochan(n);
	return 0;
}
int tonguocsochan(int nn)
{
	int i = 2;
	int s = 0;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 2;
	}
	return s;
}