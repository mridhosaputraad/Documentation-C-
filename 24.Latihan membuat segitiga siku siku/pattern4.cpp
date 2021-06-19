#include <iostream>
using namespace std;

int main()
{
    int pola, k;
    cout << "Masukkan panjang pola : ";
    cin >> pola;
    int j = 0;
    for (int i = pola; i >= 1; i--)
    {
        for (k = i, j = k * 2; k >= 1; k--, j -= 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}