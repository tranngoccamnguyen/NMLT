#include <iostream>
using namespace std;
void kiemtra(float, float,float);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;
	float y;
	cout << "Nhap y:";
	cin >> y;
	float z;
	cout << "Nhap z:";
	cin >> z;

	kiemtra(x, y,z);
	return 0;
}
void kiemtra(float xx, float yy, float zz)
{
	if (xx <= yy && yy <= zz)
		cout << "BDT dung";
	else
		cout << "BDT sai";
}
