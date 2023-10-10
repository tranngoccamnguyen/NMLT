#include <iostream>
using namespace std;
float Trituyetdoi(float, float);

int main()
{
    float a, b;
    cout << "Nhap a : ";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Ket qua la :";
    cout << a;

    cout << "Ket qua la : ";
    cout << b;
    return 0;
}

float Trituyetdoi(float a, float b)
{

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    return a, b;
}
