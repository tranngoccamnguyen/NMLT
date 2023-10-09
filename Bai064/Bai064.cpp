#include <iostream>
using namespace std;
int TichChuSoLe(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Tich cac chu so le cua " << n << " la: ";
    cout << TichChuSoLe(n);

    return 1;
}

int TichChuSoLe(int nn)
{
    float tich = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
            tich = tich * dv;
        t = t / 10;
    }
    return tich;
}
