#include <iostream>
#include <cmath>
using namespace std;
void kiemtra(float, float, float, float, float, float,float,float);

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

	float xM;
	cout << "Nhap xM:";
	cin >> xM;
	float yM;
	cout << "Nhap yM:";
	cin >> yM;

	kiemtra(xA, yA, xB, yB, xC, yC,xM,yM); 

	return 0;
}
void kiemtra(float xxA, float yyA, float xxB, float yyB, float xxC, float yyC, float xxM,float yyM) 
{
	float SABC = abs(xxA * yyB + xxB * yyC + xxC * yyA - xxB * yyA - xxC * yyB - xxA * yyC);
	float SMAB = abs(xxA * yyB + xxB * yyM + xxM * yyA - xxB * yyA - xxM * yyB - xxA * yyM);
	float SMBC = abs(xxM * yyB + xxB * yyC + xxC * yyM - xxB * yyM - xxC * yyB - xxM * yyC);
	float SMAC = abs(xxA * yyM + xxM * yyC + xxC * yyA - xxM * yyA - xxC * yyM - xxA * yyC);
	float S = SABC + SMBC + SMAC;

	if (S == SABC)
		cout << "M trong";
	else
		cout << "M ngoai";
}
