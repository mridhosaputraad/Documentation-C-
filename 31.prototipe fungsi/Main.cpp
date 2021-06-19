#include <iostream>

using namespace std;

// Prototipe (Berguna pada saat multifile)
double hitung_luas(double p, double l);
void printIn(double x);

int main()
{
    double panjang, lebar, luas;
    cin >> panjang,
        cin >> lebar,

        luas = hitung_luas(panjang, lebar);

    printIn(luas);

    cin.get();
    return 0;
}

double hitung_luas(double p, double l)
{
    return p * l;
}

void printIn(double x)
{
    cout << "hasil : " << x << endl;
}