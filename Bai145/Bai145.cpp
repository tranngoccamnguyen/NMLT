#include <iostream>
using namespace std;
int SoChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << SoChinhPhuong(n);
	return 0;
}

int SoChinhPhuong(int nn)
{
	int flag = 0;
	int i = 0;
	while (i <= nn)
	{
		if (nn % i == 0)
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << "La so chinh phuong";
	else
		cout << "Khong la so chinh phuong";
}