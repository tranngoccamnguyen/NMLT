#include <iostream>
#include <iomanip>
using namespace std;
long HangTram(long&);

int main()
{
	long n;
	cout << "Nhap so nguyen duong: ";
	cin >> n;

	cout << "Chu so hang tram vi la: ";
	cout << HangTram(n);
	return 1;
}

long HangTram(long& nn)
{
	return (nn / 100) % 10;;
}
