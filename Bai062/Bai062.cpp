#include <iostream>
using namespace std;
int TongChuSoChan(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Tong cac chu so chan cua " << n << " la: ";
    cout << TongChuSoChan(n);

    return 1;
}

int TongChuSoChan(int nn)
{
    float s = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 == 0)
            s = s + dv;
        t = t / 10;
    }
    return s;
}
