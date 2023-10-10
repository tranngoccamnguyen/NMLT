#include <iostream>
#include <cmath>
using namespace std;
float GTNN(float, float);

int main()
{
    float a, b;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Gia tri nho nhat la :";
    cout << GTNN(a, b);
}
float GTNN(float a, float b)
{
    float lc = a;
    if (lc > b)
        lc = b;
    return lc;
}