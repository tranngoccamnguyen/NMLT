#include <iostream>
#include <cmath>
using namespace std;
float DoDaiTamGiac(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x :";
	cin >> x;
	cout << "Nhap y :";
	cin >> y;
	cout << "Nhap z :";
	cin >> z;

	cout << "Ket qua la :";
	cout << DoDaiTamGIac(x, y, z);
	return 0;
}
float DoDaiTamGIac(float xx, float yy, float zz)
{
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
}

float DoDaiTamGiac(float, float, float)
{
	return 0.0f;
}
