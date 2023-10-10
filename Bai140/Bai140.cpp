#include <iostream>
#include <cmath>
using namespace std;

void GiaiBacHai(float, float, float);

int main()
{
    float a;
    cout << "Nhap a:";
    cin >> a;
    float b;
    cout << "Nhap b:";
    cin >> b;
    float c;
    cout << "Nhap c:";
    cin >> c;

    GiaiBacHai(a, b, c);
    return 0;
}
void GiaiBacHai(float aa, float bb, float cc)
{
    float dd = bb * bb - 4 * aa * cc;
    if (dd != 0)
        if (dd > 0)
        {
            float x1 = (-bb + sqrt(dd)) / (2 * aa);
            float x2 = (-bb - sqrt(dd)) / (2 * aa);
            cout << "x1= " << x1;
            cout << "x2= " << x2;
        }
        else
            cout << "Vo nghiem";
    else
    {
        float x0 = -bb / 2 * aa;
        cout << "x0= " << x0;
    }
}
