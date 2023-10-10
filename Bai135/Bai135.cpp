#include <iostream>
#include <cmath>
using namespace std;
void namnhuan(int);
int main()
{
	int n;
	cout << "Nhap nam:";
	cin >> n;

	namnhuan(n);

	return 0;
}

void namnhuan(int nn)
{

	bool dk1 = (nn % 4 == 0) && (nn % 100 != 0);
	bool dk2 = nn % 400 == 0;

	if (dk1 || dk2)
		cout << "Nam nhuan";
	else
		cout << "Nam ko nhuan";
}