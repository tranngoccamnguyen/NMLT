#include <iostream>
#include <cmath>
using namespace std;
float Tong();

int main()
{
    cout << "Ket qua: " << Tong();
    return 0;
}

float Tong()
{
    float s = 0, e = 0.5;
    int i = 2;
    while (e >= pow(10, -6))
    {
        e = (float)1 / i;
        s = s + e;
        i = i + 2;
    }
    return s;
}
