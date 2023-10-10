#include <iostream>
using namespace std;
void giaipt(float, float);
int main()
{
	float a;
	cout << "Nhap a:";
	cin >> a;
	float b;
	cout << "Nhap b:";
	cin >> b;

	giaipt(a, b);
	return 0;
	
}
void giaipt(float aa, float bb)
{
	float x;
	if (aa == 0)
	{
		if (bb == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x = (float)-bb / aa;
		cout << "x=" << x;
	}
}
