#include <iostream>
using namespace std;

long long pangkat(int a, int b)
{
    long long jumlah = a;
    for (int j = 1; j < b; j++)
    {
        jumlah *= a;
    }
    return jumlah;
}
int main()
{
    long long n;
    int digit = 1;

    cin >> n;
    int hasil = n;
    int m = n;

    while (n / 10 != 0)
    {
        n /= 10;
        digit++;
    }

    for (int i = 1; i <= digit; i++)
    {
        hasil = hasil % pangkat(10, digit - i);
        if (i < digit)
        {
            m = m - hasil;
            cout << m << endl;
        }
        else
            cout << hasil;
        m = hasil;
    }
}