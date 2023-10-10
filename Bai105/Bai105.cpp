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
    float s = 0, m = 0, e = 1;
    int i = 1;
    while (e >= pow(10, -6))
    {
        m = m + i;
        e = (float)1 / i;
        s = s + e;
        i = i++;
    }
    return s;
}
