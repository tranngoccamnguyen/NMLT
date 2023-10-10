#include <iostream>
#include <cmath>
using namespace std;
float GTLN(float, float);

int main()
{
    float a, b;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Gia tri lon nhat la :";
    cout << GTLN(a, b);
}
float GTLN(float a, float b)
{
    float lc = a;
    if (lc < b)
        lc = b;
    return lc;
}