#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	int n;
	cout << "Nhap so canh n: ";
	cin >> n;

	cout << "Dien ich la: ";
	cout << setprecision(3) << DienTich(r, n);
	return 1;
}

float DienTich(float rr, int nn)
{
	return 1 / 2 * nn * rr * rr * sin(2 * M_PI / nn);
}
