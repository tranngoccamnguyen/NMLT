#include <iostream>
#include <cmath>
using namespace std;
float pi();
int main()
{
	cout << "Ket qua: ";
	cout << pi();
	return 0;
}
float pi()
{
	float s = 3;
	int dau = 1;
	float e = 3;
	int i = 2;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i += 2;
	}
	return s; 
}