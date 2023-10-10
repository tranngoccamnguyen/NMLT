
#include <iostream>
using namespace std;
int UocSoLeLonNhat(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Uoc so le lon nhat la: ";
	cout << UocSoLeLonNhat(n);
	return 0;
}
int UocSoLeLonNhat(int nn)
{
	int t = nn;
	while (t % 2 == 0)
		t = t / 2;
	return t;
}


