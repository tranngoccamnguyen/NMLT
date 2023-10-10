#include <iostream>
#include <cmath>
using namespace std;
float Sothutu(float, float);

int main()
{
    float a, b;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Ket qua la :";
    cout << Sothutu(a, b);
}
float Sothutu(float a , float b)
{
    float a, b, temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    return a, b;
}
