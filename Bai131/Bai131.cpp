#include <iostream>
#include <cmath>
using namespace std;
void kiemtra(float, float, float, float, float, float);

int main()
{
	float xA;
	cout << "Nhap xA:";
	cin >> xA;
	float yA;
	cout << "Nhap yA:";
	cin >> yA;

	float xB;
	cout << "Nhap xB:";
	cin >> xB;
	float yB;
	cout << "Nhap yB:";
	cin >> yB;

	float xC;
	cout << "Nhap xC:";
	cin >> xC;
	float yC;
	cout << "Nhap yC:";
	cin >> yC;

	kiemtra(xA, yA, xB, yB, xC, yC); 
	return 0;
}
void kiemtra(float xxA, float yyA, float xxB, float yyB, float xxC, float yyC)
{
	float a = sqrt(pow(xxB - xxA, 2) + pow(yyB - yyA, 2));
	float b = sqrt(pow(xxC - xxA, 2) + pow(yyC - yyA, 2));
	float c = sqrt(pow(xxC - xxB, 2) + pow(yyC - yyB, 2));

	if ((a + b > c) && (a + c > b) && (b + c > a))
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
}
