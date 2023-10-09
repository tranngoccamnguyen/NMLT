#include <iostream>
#include <iomanip>
using namespace std;
void lietkeuocso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	lietkeuocso(n);
	return 0;
}
void lietkeuocso(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << setw(4) << i;
		i = i + 1;
	}
}