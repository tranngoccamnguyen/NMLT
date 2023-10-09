#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float ChuVi(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	int n;
	cout << "Nhap so canh n: ";
	cin >> n;

	cout << "Chu vi la: ";
	cout << setprecision(3) << ChuVi(r, n);
	return 1;
}

float ChuVi(float rr, int nn)
{
	return 2 * nn * rr * sin(M_PI / nn);
}
