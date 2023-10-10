#include <iostream>
using namespace std;
int SoNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << SoNguyenTo(n);
	return 0;
}

int SoNguyenTo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i != 0)
			dem++;
		i++;
	}
	if (dem == 2)
		cout << "La so nguyen to";
	else
		cout << "Khong la so nguyen to";
}