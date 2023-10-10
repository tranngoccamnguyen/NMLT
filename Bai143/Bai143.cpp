#include <iostream>
using namespace std;
int SoHoanThien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << SoHoanThien(n);
	return 0;
}

int SoHoanThien(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	if (s == nn)
		cout << "La so hoan thien";
	else
		cout << "La so khong hoan thien";
}