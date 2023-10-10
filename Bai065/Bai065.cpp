#include <iostream>
using namespace std;
int ChuSoNhoNhat(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Chu so nho nhat cua " << n << " la: ";
    cout << ChuSoNhoNhat(n);

    return 1;
}

int ChuSoNhoNhat(int nn)
{
    float lc = nn % 10;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv < lc)
            lc = dv;
        t = t / 10;
    }
    return lc;
}
