#include <iostream>
using namespace std;
void tamgiac(float, float, float);
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

	tamgiac(x, y, z);
	return 0;
}
void tamgiac(float xx,float yy,float zz) 
{
	if ((xx + yy > zz) && (xx + zz > yy) && (yy + zz > xx))
	{
		if ((xx == yy) && (yy == zz))
			cout << "Tam giac deu";
		else
		{
			if ((xx * xx == yy * yy + zz * zz) || (yy * yy == xx * xx + zz * zz) || (zz * zz == yy * yy + xx * xx))
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
		}

	}
	else
		cout << "Ko la tam giac";
}
