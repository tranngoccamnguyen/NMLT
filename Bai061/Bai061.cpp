#include <iostream>
using namespace std;
int DemChuSoLe(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "So chu so le cua " << n << " la: ";
    cout << DemChuSoLe(n);

    return 1;
}

int DemChuSoLe(int nn)
{
    int dem = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
            dem++;
        t = t / 10;
    }
    return dem;
}
