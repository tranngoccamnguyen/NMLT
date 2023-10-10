#include <iostream>
using namespace std;
int ChuSoLonNhat(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Chu so lon nhat cua " << n << " la: ";
    cout << ChuSoLonNhat(n);

    return 1;
}

int ChuSoLonNhat(int nn)
{
    float lc = nn % 10;
    int t = nn;
    while (t != 0)
    {
        float dv = t % 10;
        if (dv > lc)
            lc = dv;
        t = t / 10;
    }
    return lc;
}
